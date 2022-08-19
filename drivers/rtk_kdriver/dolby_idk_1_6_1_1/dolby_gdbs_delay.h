#ifndef __DOLBY_IDK_1_6_1_1_DOLBY_GDBS_DELAY_H__
#define __DOLBY_IDK_1_6_1_1_DOLBY_GDBS_DELAY_H__

struct dolby_vision_gdbs_delay_data {
        int delay_ott_fhd_fps_24;
        int delay_ott_fhd_fps_30;
        int delay_ott_fhd_fps_50;
        int delay_ott_fhd_fps_60;
        int delay_ott_uhd_fps_24;
        int delay_ott_uhd_fps_30;
        int delay_ott_uhd_fps_50;
        int delay_ott_uhd_fps_60;
        int delay_hdmi_fps_24;
        int delay_hdmi_fps_30;
        int delay_hdmi_fps_50;
        int delay_hdmi_fps_60;
};

void initial_timer_work(void);
void del_timer_work(void);
int set_global_dimming_duty(int32_t val, int32_t msec);
void set_gdbs_delay_matrix_table(struct dolby_vision_gdbs_delay_data table);
struct dolby_vision_gdbs_delay_data *get_gdbs_delay_matrix_table(void);

#endif
