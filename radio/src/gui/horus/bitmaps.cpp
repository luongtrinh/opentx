/*
 * Authors (alphabetical order)
 * - Andre Bernet <bernet.andre@gmail.com>
 * - Andreas Weitl
 * - Bertrand Songis <bsongis@gmail.com>
 * - Bryan J. Rentoul (Gruvin) <gruvin@gmail.com>
 * - Cameron Weeks <th9xer@gmail.com>
 * - Erez Raviv
 * - Gabriel Birkus
 * - Jean-Pierre Parisy
 * - Karl Szmutny
 * - Michael Blandford
 * - Michal Hlavinka
 * - Pat Mackenzie
 * - Philip Moss
 * - Rob Thomson
 * - Romolo Manfredini <romolo.manfredini@gmail.com>
 * - Thomas Husterer
 *
 * opentx is based on code named
 * gruvin9x by Bryan J. Rentoul: http://code.google.com/p/gruvin9x/,
 * er9x by Erez Raviv: http://code.google.com/p/er9x/,
 * and the original (and ongoing) project by
 * Thomas Husterer, th9x: http://code.google.com/p/th9x/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include "../../opentx.h"

/*
 *  Header bitmaps
 */

const uint8_t LBM_TOPMENU_POLYGON[] = {
#include "mask_topmenu_polygon.lbm"
};

const uint8_t LBM_DOT[] = {
#include "mask_dot.lbm"
};

const uint8_t LBM_CURRENT_BG[] = {
#include "mask_current_bg.lbm"
};

const uint8_t LBM_CURRENT_SHADOW[] = {
#include "mask_current_shadow.lbm"
};

const uint8_t LBM_CURRENT_DOT[] = {
#include "mask_current_dot.lbm"
};

/*
 * Main view bitmaps
 */

const uint8_t LBM_MAINVIEW_BACKGROUND[] = {
#include "background.lbm"
};

const uint8_t LBM_TOPMENU_OPENTX[] = {
#include "mask_topmenu_opentx.lbm"
};

const uint8_t LBM_TOPMENU_USB[] = {
#include "mask_topmenu_usb.lbm"
};

const uint8_t LBM_HTRIM_FRAME[] = {
#include "mask_htrim_frame.lbm"
};

const uint8_t LBM_VTRIM_FRAME[] = {
#include "mask_vtrim_frame.lbm"
};

const uint8_t LBM_TRIM_SHADOW[] = {
#include "mask_trim_shadow.lbm"
};

const uint8_t LBM_TIMER_BACKGROUND[] = {
#include "mask_timer_bg.lbm"
};

const uint8_t LBM_RSCALE[] = {
#include "mask_rscale.lbm"
};

/*
 *  Radio menu bitmaps
 */

const uint8_t LBM_RADIO_ICON[] = {
#include "mask_menu_radio.lbm"
};

const uint8_t LBM_RADIO_SETUP_ICON[] = {
#include "mask_radio_setup.lbm"
};

const uint8_t LBM_SD_BROWSER_ICON[] = {
#include "mask_sd_browser.lbm"
};

const uint8_t LBM_GLOBAL_FUNCTIONS_ICON[] = {
#include "mask_global_functions.lbm"
};

const uint8_t LBM_TRAINER_ICON[] = {
#include "mask_trainer.lbm"
};

const uint8_t LBM_CALIBRATION_ICON[] = {
#include "mask_calibration.lbm"
};

const uint8_t LBM_VERSION_ICON[] = {
#include "mask_version.lbm"
};

const uint8_t * const LBM_RADIO_ICONS[] = {
  LBM_RADIO_ICON,
  LBM_RADIO_SETUP_ICON,
  LBM_SD_BROWSER_ICON,
  LBM_GLOBAL_FUNCTIONS_ICON,
  LBM_TRAINER_ICON,
  LBM_CALIBRATION_ICON,
  LBM_VERSION_ICON
};

/*
 *  Model menu bitmaps
 */

const uint8_t LBM_MODEL_ICON[] = {
#include "mask_menu_model.lbm"
};

const uint8_t LBM_MODEL_SETUP_ICON[] = {
#include "mask_model_setup.lbm"
};

const uint8_t LBM_HELI_ICON[] = {
#include "mask_heli.lbm"
};

const uint8_t LBM_FLIGHT_MODES_ICON[] = {
#include "mask_flight_modes.lbm"
};

const uint8_t LBM_INPUTS_ICON[] = {
#include "mask_inputs.lbm"
};

const uint8_t LBM_MIXER_ICON[] = {
#include "mask_mixer.lbm"
};

const uint8_t LBM_OUTPUTS_ICON[] = {
#include "mask_outputs.lbm"
};

const uint8_t LBM_CURVES_ICON[] = {
#include "mask_curves.lbm"
};

const uint8_t LBM_GVARS_ICON[] = {
#include "mask_gvars.lbm"
};

const uint8_t LBM_LOGICAL_SWITCHES_ICON[] = {
#include "mask_logical_switches.lbm"
};

const uint8_t LBM_SPECIAL_FUNCTIONS_ICON[] = {
#include "mask_special_functions.lbm"
};

const uint8_t LBM_LUA_SCRIPTS_ICON[] = {
#include "mask_lua_scripts.lbm"
};

const uint8_t LBM_TELEMETRY_ICON[] = {
#include "mask_telemetry.lbm"
};

const uint8_t * const LBM_MODEL_ICONS[] = {
  LBM_MODEL_ICON,
  LBM_MODEL_SETUP_ICON,
  CASE_HELI(LBM_HELI_ICON)
  CASE_FLIGHT_MODES(LBM_FLIGHT_MODES_ICON)
  LBM_INPUTS_ICON,
  LBM_MIXER_ICON,
  LBM_OUTPUTS_ICON,
  CASE_CURVES(LBM_CURVES_ICON)
  CASE_GVARS(LBM_GVARS_ICON)
  LBM_LOGICAL_SWITCHES_ICON,
  LBM_SPECIAL_FUNCTIONS_ICON,
#if defined(LUA_MODEL_SCRIPTS)
  LBM_LUA_SCRIPTS_ICON,
#endif
  LBM_TELEMETRY_ICON
};

/*
 *  Model selection screen bitmaps
 */

const uint8_t LBM_LIBRARY_ICON[] = {
#include "mask_library.lbm"
};

const uint8_t LBM_LIBRARY_SLOT[] = {
#include "mask_library_slot.lbm"
};

const uint8_t LBM_LIBRARY_CURSOR[] = {
#include "mask_library_category_index.lbm"
};

const uint8_t LBM_SCORE0[] = {
#include "mask_library_score_0.lbm"
};

const uint8_t LBM_SCORE1[] = {
#include "mask_library_score_1.lbm"
};

const uint8_t LBM_STAR0[] = {
#include "mask_library_star_0.lbm"
};

const uint8_t LBM_STAR1[] = {
#include "mask_library_star_1.lbm"
};

/*
 * Other
 */

const uint8_t LBM_ASTERISK[] = {
#include "asterisk.lbm"
};

const uint8_t LBM_POINT[] = {
#include "mask_point.lbm"
};

const uint8_t LBM_CURVE_POINT[] = {
#include "mask_cvpoint.lbm"
};

const uint8_t LBM_CURVE_POINT_CENTER[] = {
#include "mask_cvpoint_center.lbm"
};

const uint8_t LBM_CURVE_COORD_SHADOW[] = {
#include "mask_coord_shadow.lbm"
};