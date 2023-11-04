#pragma once
#include <fstream>
#include "json.hpp"
#include "auto_updater.hpp"

using json = nlohmann::json;

struct RGB {
	int r;
	int g;
	int b;

	// Conversion function from RGB to COLORREF
	operator COLORREF() const {
		return RGB(r, g, b);
	}
};


namespace config {
	const std::string file_path = "config.json";

	extern bool read();
	extern void save();

	inline bool automatic_update = false;
	inline bool team_esp = false;
	inline float render_distance = -1.f;
	inline int flag_render_distance = 200;
	inline bool show_extra_flags = false;

	inline RGB esp_box_color_team = { 75, 175, 75 };
	inline RGB esp_box_color_enemy = { 175, 75, 75 };
	inline RGB esp_name_color = { 75, 75, 175 };
	inline RGB esp_distance_color = { 75, 75, 175 };
}
