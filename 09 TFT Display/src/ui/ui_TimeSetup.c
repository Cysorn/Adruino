// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: Wecker

#include "ui.h"

void ui_TimeSetup_screen_init(void)
{
    ui_TimeSetup = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_TimeSetup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Bckg4 = lv_img_create(ui_TimeSetup);
    lv_img_set_src(ui_Bckg4, &ui_img_1_png);
    lv_obj_set_width(ui_Bckg4, LV_SIZE_CONTENT);   /// 320
    lv_obj_set_height(ui_Bckg4, LV_SIZE_CONTENT);    /// 240
    lv_obj_set_align(ui_Bckg4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Bckg4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Bckg4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TimeSetupLabel = lv_label_create(ui_TimeSetup);
    lv_obj_set_width(ui_TimeSetupLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeSetupLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TimeSetupLabel, 0);
    lv_obj_set_y(ui_TimeSetupLabel, -96);
    lv_obj_set_align(ui_TimeSetupLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TimeSetupLabel, "Zeit einstellen");
    lv_obj_set_style_text_font(ui_TimeSetupLabel, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TimeChoose = lv_obj_create(ui_TimeSetup);
    lv_obj_remove_style_all(ui_TimeChoose);
    lv_obj_set_width(ui_TimeChoose, 186);
    lv_obj_set_height(ui_TimeChoose, 181);
    lv_obj_set_x(ui_TimeChoose, 1);
    lv_obj_set_y(ui_TimeChoose, 12);
    lv_obj_set_align(ui_TimeChoose, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TimeChoose, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_HourChooseRoller = lv_roller_create(ui_TimeChoose);
    lv_roller_set_options(ui_HourChooseRoller,
                          "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23",
                          LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(ui_HourChooseRoller, 100);
    lv_obj_set_width(ui_HourChooseRoller, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_HourChooseRoller, -49);
    lv_obj_set_y(ui_HourChooseRoller, -21);
    lv_obj_set_align(ui_HourChooseRoller, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(ui_HourChooseRoller, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_HourChooseRoller, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_HourChooseRoller, lv_color_hex(0xE9E9E9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HourChooseRoller, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_HourChooseRoller, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_HourChooseRoller, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_HourChooseRoller, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_HourChooseRoller, lv_color_hex(0x000000), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_HourChooseRoller, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_HourChooseRoller, LV_TEXT_ALIGN_AUTO, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_HourChooseRoller, 100, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_HourChooseRoller, lv_color_hex(0xDADADA), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HourChooseRoller, 200, LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_ColonTimeChoose = lv_label_create(ui_TimeChoose);
    lv_obj_set_width(ui_ColonTimeChoose, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ColonTimeChoose, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ColonTimeChoose, 1);
    lv_obj_set_y(ui_ColonTimeChoose, -21);
    lv_obj_set_align(ui_ColonTimeChoose, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ColonTimeChoose, ":");
    lv_obj_set_style_text_font(ui_ColonTimeChoose, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MinChooseRoller = lv_roller_create(ui_TimeChoose);
    lv_roller_set_options(ui_MinChooseRoller,
                          "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59",
                          LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(ui_MinChooseRoller, 100);
    lv_obj_set_width(ui_MinChooseRoller, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_MinChooseRoller, 51);
    lv_obj_set_y(ui_MinChooseRoller, -21);
    lv_obj_set_align(ui_MinChooseRoller, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(ui_MinChooseRoller, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_MinChooseRoller, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MinChooseRoller, lv_color_hex(0xE9E9E9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MinChooseRoller, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_MinChooseRoller, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_MinChooseRoller, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_MinChooseRoller, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_MinChooseRoller, lv_color_hex(0x000000), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MinChooseRoller, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_MinChooseRoller, LV_TEXT_ALIGN_AUTO, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_MinChooseRoller, 100, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MinChooseRoller, lv_color_hex(0xDADADA), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MinChooseRoller, 200, LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_CheckMark = lv_imgbtn_create(ui_TimeChoose);
    lv_imgbtn_set_src(ui_CheckMark, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_687697873, NULL);
    lv_imgbtn_set_src(ui_CheckMark, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_2049616620, NULL);
    lv_obj_set_height(ui_CheckMark, 61);
    lv_obj_set_width(ui_CheckMark, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_CheckMark, 1);
    lv_obj_set_y(ui_CheckMark, 58);
    lv_obj_set_align(ui_CheckMark, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_CheckMark, ui_event_CheckMark, LV_EVENT_ALL, NULL);

}
