/* Copyright 2021 Matt Hoffman
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "visualizer.h"
#include "led_backlight_keyframes.h"
#include "default_animations.h"

keyframe_animation_t startup_animation = {
    .num_frames      = 2,
    .loop            = false,
    .frame_lengths   = {0,
                        gfxMillisecondsToTicks(3000)},
    .frame_functions = {led_backlight_keyframe_enable,
                        led_backlight_keyframe_fade_in_all},
};

void initialize_user_visualizer(visualizer_state_t *state) {
    start_keyframe_animation(&startup_animation);
}

void user_visualizer_resume(visualizer_state_t *state) {
    start_keyframe_animation(&startup_animation);
}

void update_user_visualizer_state(visualizer_state_t *state,
                                  visualizer_keyboard_status_t *prev_status) {
}

void user_visualizer_suspend(visualizer_state_t *state) {
}
