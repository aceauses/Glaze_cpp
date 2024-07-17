#pragma once

#include "glaze/core/common.hpp"
#include "nlohmann/json.hpp"
#include <boost/optional.hpp>
#include <string>

struct AdvertismentInfo {
	bool    show_advertisment;
	bool    show_preroll_advertisment;
	bool    show_left_skyscraper_advertisment;
	bool    show_pop_under_advertisment;
	bool    show_footer_billboard_advertisment;
	int64_t advertisment_refresh_rate;
	int64_t mobile_interstitial_cooldown;
	int64_t remaining_video_advertisment_cooldown_1;
	int64_t video_advertisment_blocked_time_1;
	int64_t remaining_video_advertisment_cooldown_2;
	int64_t video_advertisment_blocked_time_2;
	int64_t remaining_video_advertisment_cooldown_3;
	int64_t video_advertisment_blocked_time_3;
	int64_t remaining_video_advertisment_cooldown_4;
	int64_t video_advertisment_blocked_time_4;
	int64_t remaining_video_advertisment_cooldown_5;
	int64_t video_advertisment_blocked_time_5;
	int64_t remaining_video_advertisment_cooldown_6;
	int64_t video_advertisment_blocked_time_6;
	int64_t remaining_video_advertisment_cooldown_7;
	int64_t video_advertisment_blocked_time_7;

	struct glaze {
		using T                     = AdvertismentInfo;
		static constexpr auto value = glz::object(
			"show_advertisment", &T::show_advertisment,
			"show_preroll_advertisment", &T::show_preroll_advertisment,
			"show_left_skyscraper_advertisment",
			&T::show_left_skyscraper_advertisment,
			"show_pop_under_advertisment", &T::show_pop_under_advertisment,
			"show_footer_billboard_advertisment",
			&T::show_footer_billboard_advertisment,
			"advertisment_refresh_rate", &T::advertisment_refresh_rate,
			"mobile_interstitial_cooldown",
			&T::mobile_interstitial_cooldown,
			"remaining_video_advertisment_cooldown_1",
			&T::remaining_video_advertisment_cooldown_1,
			"video_advertisment_blocked_time_1",
			&T::video_advertisment_blocked_time_1,
			"remaining_video_advertisment_cooldown_2",
			&T::remaining_video_advertisment_cooldown_2,
			"video_advertisment_blocked_time_2",
			&T::video_advertisment_blocked_time_2,
			"remaining_video_advertisment_cooldown_3",
			&T::remaining_video_advertisment_cooldown_3,
			"video_advertisment_blocked_time_3",
			&T::video_advertisment_blocked_time_3,
			"remaining_video_advertisment_cooldown_4",
			&T::remaining_video_advertisment_cooldown_4,
			"video_advertisment_blocked_time_4",
			&T::video_advertisment_blocked_time_4,
			"remaining_video_advertisment_cooldown_5",
			&T::remaining_video_advertisment_cooldown_5,
			"video_advertisment_blocked_time_5",
			&T::video_advertisment_blocked_time_5,
			"remaining_video_advertisment_cooldown_6",
			&T::remaining_video_advertisment_cooldown_6,
			"video_advertisment_blocked_time_6",
			&T::video_advertisment_blocked_time_6,
			"remaining_video_advertisment_cooldown_7",
			&T::remaining_video_advertisment_cooldown_7,
			"video_advertisment_blocked_time_7",
			&T::video_advertisment_blocked_time_7);
	};
};

struct BankInventory {
	int64_t     id;
	int64_t     character_id;
	int64_t     max_bank_index;
	std::string locked_item_ids;
	int64_t     bank_item1_id;
	int64_t     bank_item2_id;
	int64_t     bank_item3_id;
	int64_t     bank_item4_id;
	int64_t     bank_item5_id;
	int64_t     bank_item6_id;
	int64_t     bank_item7_id;
	int64_t     bank_item8_id;
	int64_t     bank_item9_id;
	int64_t     bank_item10_id;
	int64_t     bank_item11_id;
	int64_t     bank_item12_id;
	int64_t     bank_item13_id;
	int64_t     bank_item14_id;
	int64_t     bank_item15_id;
	int64_t     bank_item16_id;
	int64_t     bank_item17_id;
	int64_t     bank_item18_id;
	int64_t     bank_item19_id;
	int64_t     bank_item20_id;
	int64_t     bank_item21_id;
	int64_t     bank_item22_id;
	int64_t     bank_item23_id;
	int64_t     bank_item24_id;
	int64_t     bank_item25_id;
	int64_t     bank_item26_id;
	int64_t     bank_item27_id;
	int64_t     bank_item28_id;
	int64_t     bank_item29_id;
	int64_t     bank_item30_id;
	int64_t     bank_item31_id;
	int64_t     bank_item32_id;
	int64_t     bank_item33_id;
	int64_t     bank_item34_id;
	int64_t     bank_item35_id;
	int64_t     bank_item36_id;
	int64_t     bank_item37_id;
	int64_t     bank_item38_id;
	int64_t     bank_item39_id;
	int64_t     bank_item40_id;
	int64_t     bank_item41_id;
	int64_t     bank_item42_id;
	int64_t     bank_item43_id;
	int64_t     bank_item44_id;
	int64_t     bank_item45_id;
	int64_t     bank_item46_id;
	int64_t     bank_item47_id;
	int64_t     bank_item48_id;
	int64_t     bank_item49_id;
	int64_t     bank_item50_id;
	int64_t     bank_item51_id;
	int64_t     bank_item52_id;
	int64_t     bank_item53_id;
	int64_t     bank_item54_id;
	int64_t     bank_item55_id;
	int64_t     bank_item56_id;
	int64_t     bank_item57_id;
	int64_t     bank_item58_id;
	int64_t     bank_item59_id;
	int64_t     bank_item60_id;
	int64_t     bank_item61_id;
	int64_t     bank_item62_id;
	int64_t     bank_item63_id;
	int64_t     bank_item64_id;
	int64_t     bank_item65_id;
	int64_t     bank_item66_id;
	int64_t     bank_item67_id;
	int64_t     bank_item68_id;
	int64_t     bank_item69_id;
	int64_t     bank_item70_id;
	int64_t     bank_item71_id;
	int64_t     bank_item72_id;
	int64_t     bank_item73_id;
	int64_t     bank_item74_id;
	int64_t     bank_item75_id;
	int64_t     bank_item76_id;
	int64_t     bank_item77_id;
	int64_t     bank_item78_id;
	int64_t     bank_item79_id;
	int64_t     bank_item80_id;
	int64_t     bank_item81_id;
	int64_t     bank_item82_id;
	int64_t     bank_item83_id;
	int64_t     bank_item84_id;
	int64_t     bank_item85_id;
	int64_t     bank_item86_id;
	int64_t     bank_item87_id;
	int64_t     bank_item88_id;
	int64_t     bank_item89_id;
	int64_t     bank_item90_id;
	int64_t     bank_item91_id;
	int64_t     bank_item92_id;
	int64_t     bank_item93_id;
	int64_t     bank_item94_id;
	int64_t     bank_item95_id;
	int64_t     bank_item96_id;
	int64_t     bank_item97_id;
	int64_t     bank_item98_id;
	int64_t     bank_item99_id;
	int64_t     bank_item100_id;
	int64_t     bank_item101_id;
	int64_t     bank_item102_id;
	int64_t     bank_item103_id;
	int64_t     bank_item104_id;
	int64_t     bank_item105_id;
	int64_t     bank_item106_id;
	int64_t     bank_item107_id;
	int64_t     bank_item108_id;
	int64_t     bank_item109_id;
	int64_t     bank_item110_id;
	int64_t     bank_item111_id;
	int64_t     bank_item112_id;
	int64_t     bank_item113_id;
	int64_t     bank_item114_id;
	int64_t     bank_item115_id;
	int64_t     bank_item116_id;
	int64_t     bank_item117_id;
	int64_t     bank_item118_id;
	int64_t     bank_item119_id;
	int64_t     bank_item120_id;
	int64_t     bank_item121_id;
	int64_t     bank_item122_id;
	int64_t     bank_item123_id;
	int64_t     bank_item124_id;
	int64_t     bank_item125_id;
	int64_t     bank_item126_id;
	int64_t     bank_item127_id;
	int64_t     bank_item128_id;
	int64_t     bank_item129_id;
	int64_t     bank_item130_id;
	int64_t     bank_item131_id;
	int64_t     bank_item132_id;
	int64_t     bank_item133_id;
	int64_t     bank_item134_id;
	int64_t     bank_item135_id;
	int64_t     bank_item136_id;
	int64_t     bank_item137_id;
	int64_t     bank_item138_id;
	int64_t     bank_item139_id;
	int64_t     bank_item140_id;
	int64_t     bank_item141_id;
	int64_t     bank_item142_id;
	int64_t     bank_item143_id;
	int64_t     bank_item144_id;
	int64_t     bank_item145_id;
	int64_t     bank_item146_id;
	int64_t     bank_item147_id;
	int64_t     bank_item148_id;
	int64_t     bank_item149_id;
	int64_t     bank_item150_id;
	int64_t     bank_item151_id;
	int64_t     bank_item152_id;
	int64_t     bank_item153_id;
	int64_t     bank_item154_id;
	int64_t     bank_item155_id;
	int64_t     bank_item156_id;
	int64_t     bank_item157_id;
	int64_t     bank_item158_id;
	int64_t     bank_item159_id;
	int64_t     bank_item160_id;
	int64_t     bank_item161_id;
	int64_t     bank_item162_id;
	int64_t     bank_item163_id;
	int64_t     bank_item164_id;
	int64_t     bank_item165_id;
	int64_t     bank_item166_id;
	int64_t     bank_item167_id;
	int64_t     bank_item168_id;
	int64_t     bank_item169_id;
	int64_t     bank_item170_id;
	int64_t     bank_item171_id;
	int64_t     bank_item172_id;
	int64_t     bank_item173_id;
	int64_t     bank_item174_id;
	int64_t     bank_item175_id;
	int64_t     bank_item176_id;
	int64_t     bank_item177_id;
	int64_t     bank_item178_id;
	int64_t     bank_item179_id;
	int64_t     bank_item180_id;
	int64_t     bank_item181_id;
	int64_t     bank_item182_id;
	int64_t     bank_item183_id;
	int64_t     bank_item184_id;
	int64_t     bank_item185_id;
	int64_t     bank_item186_id;
	int64_t     bank_item187_id;
	int64_t     bank_item188_id;
	int64_t     bank_item189_id;
	int64_t     bank_item190_id;
	int64_t     bank_item191_id;
	int64_t     bank_item192_id;
	int64_t     bank_item193_id;
	int64_t     bank_item194_id;
	int64_t     bank_item195_id;
	int64_t     bank_item196_id;
	int64_t     bank_item197_id;
	int64_t     bank_item198_id;
	int64_t     bank_item199_id;
	int64_t     bank_item200_id;
	int64_t     bank_item201_id;
	int64_t     bank_item202_id;
	int64_t     bank_item203_id;
	int64_t     bank_item204_id;
	int64_t     bank_item205_id;
	int64_t     bank_item206_id;
	int64_t     bank_item207_id;
	int64_t     bank_item208_id;
	int64_t     bank_item209_id;
	int64_t     bank_item210_id;
	int64_t     bank_item211_id;
	int64_t     bank_item212_id;
	int64_t     bank_item213_id;
	int64_t     bank_item214_id;
	int64_t     bank_item215_id;
	int64_t     bank_item216_id;
	int64_t     bank_item217_id;
	int64_t     bank_item218_id;
	int64_t     bank_item219_id;
	int64_t     bank_item220_id;
	int64_t     bank_item221_id;
	int64_t     bank_item222_id;
	int64_t     bank_item223_id;
	int64_t     bank_item224_id;
	int64_t     bank_item225_id;
	int64_t     bank_item226_id;
	int64_t     bank_item227_id;
	int64_t     bank_item228_id;
	int64_t     bank_item229_id;
	int64_t     bank_item230_id;
	int64_t     bank_item231_id;
	int64_t     bank_item232_id;
	int64_t     bank_item233_id;
	int64_t     bank_item234_id;
	int64_t     bank_item235_id;
	int64_t     bank_item236_id;
	int64_t     bank_item237_id;
	int64_t     bank_item238_id;
	int64_t     bank_item239_id;
	int64_t     bank_item240_id;
	int64_t     bank_item241_id;
	int64_t     bank_item242_id;
	int64_t     bank_item243_id;
	int64_t     bank_item244_id;
	int64_t     bank_item245_id;
	int64_t     bank_item246_id;
	int64_t     bank_item247_id;
	int64_t     bank_item248_id;
	int64_t     bank_item249_id;
	int64_t     bank_item250_id;
	int64_t     bank_item251_id;
	int64_t     bank_item252_id;
	int64_t     bank_item253_id;
	int64_t     bank_item254_id;
	int64_t     bank_item255_id;
	int64_t     bank_item256_id;
	int64_t     bank_item257_id;
	int64_t     bank_item258_id;
	int64_t     bank_item259_id;
	int64_t     bank_item260_id;
	int64_t     bank_item261_id;
	int64_t     bank_item262_id;
	int64_t     bank_item263_id;
	int64_t     bank_item264_id;
	int64_t     bank_item265_id;
	int64_t     bank_item266_id;
	int64_t     bank_item267_id;
	int64_t     bank_item268_id;
	int64_t     bank_item269_id;
	int64_t     bank_item270_id;
	int64_t     bank_item271_id;
	int64_t     bank_item272_id;
	int64_t     bank_item273_id;
	int64_t     bank_item274_id;
	int64_t     bank_item275_id;
	int64_t     bank_item276_id;
	int64_t     bank_item277_id;
	int64_t     bank_item278_id;
	int64_t     bank_item279_id;
	int64_t     bank_item280_id;
	int64_t     bank_item281_id;
	int64_t     bank_item282_id;
	int64_t     bank_item283_id;
	int64_t     bank_item284_id;
	int64_t     bank_item285_id;
	int64_t     bank_item286_id;
	int64_t     bank_item287_id;
	int64_t     bank_item288_id;
	int64_t     bank_item289_id;
	int64_t     bank_item290_id;
	int64_t     bank_item291_id;
	int64_t     bank_item292_id;
	int64_t     bank_item293_id;
	int64_t     bank_item294_id;
	int64_t     bank_item295_id;
	int64_t     bank_item296_id;
	int64_t     bank_item297_id;
	int64_t     bank_item298_id;
	int64_t     bank_item299_id;
	int64_t     bank_item300_id;
	int64_t     bank_item301_id;
	int64_t     bank_item302_id;
	int64_t     bank_item303_id;
	int64_t     bank_item304_id;
	int64_t     bank_item305_id;
	int64_t     bank_item306_id;
	int64_t     bank_item307_id;
	int64_t     bank_item308_id;
	int64_t     bank_item309_id;
	int64_t     bank_item310_id;
	int64_t     bank_item311_id;
	int64_t     bank_item312_id;
	int64_t     bank_item313_id;
	int64_t     bank_item314_id;
	int64_t     bank_item315_id;
	int64_t     bank_item316_id;
	int64_t     bank_item317_id;
	int64_t     bank_item318_id;
	int64_t     bank_item319_id;
	int64_t     bank_item320_id;
	int64_t     bank_item321_id;
	int64_t     bank_item322_id;
	int64_t     bank_item323_id;
	int64_t     bank_item324_id;
	int64_t     bank_item325_id;
	int64_t     bank_item326_id;
	int64_t     bank_item327_id;
	int64_t     bank_item328_id;
	int64_t     bank_item329_id;
	int64_t     bank_item330_id;
	int64_t     bank_item331_id;
	int64_t     bank_item332_id;
	int64_t     bank_item333_id;
	int64_t     bank_item334_id;
	int64_t     bank_item335_id;
	int64_t     bank_item336_id;
	int64_t     bank_item337_id;
	int64_t     bank_item338_id;
	int64_t     bank_item339_id;
	int64_t     bank_item340_id;
	int64_t     bank_item341_id;
	int64_t     bank_item342_id;
	int64_t     bank_item343_id;
	int64_t     bank_item344_id;
	int64_t     bank_item345_id;
	int64_t     bank_item346_id;
	int64_t     bank_item347_id;
	int64_t     bank_item348_id;
	int64_t     bank_item349_id;
	int64_t     bank_item350_id;
	int64_t     bank_item351_id;
	int64_t     bank_item352_id;
	int64_t     bank_item353_id;
	int64_t     bank_item354_id;
	int64_t     bank_item355_id;
	int64_t     bank_item356_id;
	int64_t     bank_item357_id;
	int64_t     bank_item358_id;
	int64_t     bank_item359_id;
	int64_t     bank_item360_id;
	int64_t     bank_item361_id;
	int64_t     bank_item362_id;
	int64_t     bank_item363_id;
	int64_t     bank_item364_id;
	int64_t     bank_item365_id;
	int64_t     bank_item366_id;
	int64_t     bank_item367_id;
	int64_t     bank_item368_id;
	int64_t     bank_item369_id;
	int64_t     bank_item370_id;
	int64_t     bank_item371_id;
	int64_t     bank_item372_id;
	int64_t     bank_item373_id;
	int64_t     bank_item374_id;
	int64_t     bank_item375_id;
	int64_t     bank_item376_id;
	int64_t     bank_item377_id;
	int64_t     bank_item378_id;
	int64_t     bank_item379_id;
	int64_t     bank_item380_id;
	int64_t     bank_item381_id;
	int64_t     bank_item382_id;
	int64_t     bank_item383_id;
	int64_t     bank_item384_id;
	int64_t     bank_item385_id;
	int64_t     bank_item386_id;
	int64_t     bank_item387_id;
	int64_t     bank_item388_id;
	int64_t     bank_item389_id;
	int64_t     bank_item390_id;
	int64_t     bank_item391_id;
	int64_t     bank_item392_id;
	int64_t     bank_item393_id;
	int64_t     bank_item394_id;
	int64_t     bank_item395_id;
	int64_t     bank_item396_id;
	int64_t     bank_item397_id;
	int64_t     bank_item398_id;
	int64_t     bank_item399_id;
	int64_t     bank_item400_id;
	int64_t     bank_item401_id;
	int64_t     bank_item402_id;
	int64_t     bank_item403_id;
	int64_t     bank_item404_id;
	int64_t     bank_item405_id;
	int64_t     bank_item406_id;
	int64_t     bank_item407_id;
	int64_t     bank_item408_id;
	int64_t     bank_item409_id;
	int64_t     bank_item410_id;
	int64_t     bank_item411_id;
	int64_t     bank_item412_id;
	int64_t     bank_item413_id;
	int64_t     bank_item414_id;
	int64_t     bank_item415_id;
	int64_t     bank_item416_id;
	int64_t     bank_item417_id;
	int64_t     bank_item418_id;
	int64_t     bank_item419_id;
	int64_t     bank_item420_id;
	int64_t     bank_item421_id;
	int64_t     bank_item422_id;
	int64_t     bank_item423_id;
	int64_t     bank_item424_id;
	int64_t     bank_item425_id;
	int64_t     bank_item426_id;
	int64_t     bank_item427_id;
	int64_t     bank_item428_id;
	int64_t     bank_item429_id;
	int64_t     bank_item430_id;
	int64_t     bank_item431_id;
	int64_t     bank_item432_id;
	int64_t     bank_item433_id;
	int64_t     bank_item434_id;
	int64_t     bank_item435_id;
	int64_t     bank_item436_id;
	int64_t     bank_item437_id;
	int64_t     bank_item438_id;
	int64_t     bank_item439_id;
	int64_t     bank_item440_id;
	int64_t     bank_item441_id;
	int64_t     bank_item442_id;
	int64_t     bank_item443_id;
	int64_t     bank_item444_id;
	int64_t     bank_item445_id;
	int64_t     bank_item446_id;
	int64_t     bank_item447_id;
	int64_t     bank_item448_id;
	int64_t     bank_item449_id;
	int64_t     bank_item450_id;

	struct glaze {
		using T                     = BankInventory;
		static constexpr auto value = glz::object(
			"id", &T::id, "character_id", &T::character_id,
			"max_bank_index", &T::max_bank_index, "locked_item_ids",
			&T::locked_item_ids, "bank_item1_id", &T::bank_item1_id,
			"bank_item2_id", &T::bank_item2_id, "bank_item3_id",
			&T::bank_item3_id, "bank_item4_id", &T::bank_item4_id,
			"bank_item5_id", &T::bank_item5_id, "bank_item6_id",
			&T::bank_item6_id, "bank_item7_id", &T::bank_item7_id,
			"bank_item8_id", &T::bank_item8_id, "bank_item9_id",
			&T::bank_item9_id, "bank_item10_id", &T::bank_item10_id,
			"bank_item11_id", &T::bank_item11_id, "bank_item12_id",
			&T::bank_item12_id, "bank_item13_id", &T::bank_item13_id,
			"bank_item14_id", &T::bank_item14_id, "bank_item15_id",
			&T::bank_item15_id, "bank_item16_id", &T::bank_item16_id,
			"bank_item17_id", &T::bank_item17_id, "bank_item18_id",
			&T::bank_item18_id, "bank_item19_id", &T::bank_item19_id,
			"bank_item20_id", &T::bank_item20_id, "bank_item21_id",
			&T::bank_item21_id, "bank_item22_id", &T::bank_item22_id,
			"bank_item23_id", &T::bank_item23_id, "bank_item24_id",
			&T::bank_item24_id, "bank_item25_id", &T::bank_item25_id,
			"bank_item26_id", &T::bank_item26_id, "bank_item27_id",
			&T::bank_item27_id, "bank_item28_id", &T::bank_item28_id,
			"bank_item29_id", &T::bank_item29_id, "bank_item30_id",
			&T::bank_item30_id, "bank_item31_id", &T::bank_item31_id,
			"bank_item32_id", &T::bank_item32_id, "bank_item33_id",
			&T::bank_item33_id, "bank_item34_id", &T::bank_item34_id,
			"bank_item35_id", &T::bank_item35_id, "bank_item36_id",
			&T::bank_item36_id, "bank_item37_id", &T::bank_item37_id,
			"bank_item38_id", &T::bank_item38_id, "bank_item39_id",
			&T::bank_item39_id, "bank_item40_id", &T::bank_item40_id,
			"bank_item41_id", &T::bank_item41_id, "bank_item42_id",
			&T::bank_item42_id, "bank_item43_id", &T::bank_item43_id,
			"bank_item44_id", &T::bank_item44_id, "bank_item45_id",
			&T::bank_item45_id, "bank_item46_id", &T::bank_item46_id,
			"bank_item47_id", &T::bank_item47_id, "bank_item48_id",
			&T::bank_item48_id, "bank_item49_id", &T::bank_item49_id,
			"bank_item50_id", &T::bank_item50_id, "bank_item51_id",
			&T::bank_item51_id, "bank_item52_id", &T::bank_item52_id,
			"bank_item53_id", &T::bank_item53_id, "bank_item54_id",
			&T::bank_item54_id, "bank_item55_id", &T::bank_item55_id,
			"bank_item56_id", &T::bank_item56_id, "bank_item57_id",
			&T::bank_item57_id, "bank_item58_id", &T::bank_item58_id,
			"bank_item59_id", &T::bank_item59_id, "bank_item60_id",
			&T::bank_item60_id, "bank_item61_id", &T::bank_item61_id,
			"bank_item62_id", &T::bank_item62_id, "bank_item63_id",
			&T::bank_item63_id, "bank_item64_id", &T::bank_item64_id,
			"bank_item65_id", &T::bank_item65_id, "bank_item66_id",
			&T::bank_item66_id, "bank_item67_id", &T::bank_item67_id,
			"bank_item68_id", &T::bank_item68_id, "bank_item69_id",
			&T::bank_item69_id, "bank_item70_id", &T::bank_item70_id,
			"bank_item71_id", &T::bank_item71_id, "bank_item72_id",
			&T::bank_item72_id, "bank_item73_id", &T::bank_item73_id,
			"bank_item74_id", &T::bank_item74_id, "bank_item75_id",
			&T::bank_item75_id, "bank_item76_id", &T::bank_item76_id,
			"bank_item77_id", &T::bank_item77_id, "bank_item78_id",
			&T::bank_item78_id, "bank_item79_id", &T::bank_item79_id,
			"bank_item80_id", &T::bank_item80_id, "bank_item81_id",
			&T::bank_item81_id, "bank_item82_id", &T::bank_item82_id,
			"bank_item83_id", &T::bank_item83_id, "bank_item84_id",
			&T::bank_item84_id, "bank_item85_id", &T::bank_item85_id,
			"bank_item86_id", &T::bank_item86_id, "bank_item87_id",
			&T::bank_item87_id, "bank_item88_id", &T::bank_item88_id,
			"bank_item89_id", &T::bank_item89_id, "bank_item90_id",
			&T::bank_item90_id, "bank_item91_id", &T::bank_item91_id,
			"bank_item92_id", &T::bank_item92_id, "bank_item93_id",
			&T::bank_item93_id, "bank_item94_id", &T::bank_item94_id,
			"bank_item95_id", &T::bank_item95_id, "bank_item96_id",
			&T::bank_item96_id, "bank_item97_id", &T::bank_item97_id,
			"bank_item98_id", &T::bank_item98_id, "bank_item99_id",
			&T::bank_item99_id, "bank_item100_id", &T::bank_item100_id,
			"bank_item101_id", &T::bank_item101_id, "bank_item102_id",
			&T::bank_item102_id, "bank_item103_id", &T::bank_item103_id,
			"bank_item104_id", &T::bank_item104_id, "bank_item105_id",
			&T::bank_item105_id, "bank_item106_id", &T::bank_item106_id,
			"bank_item107_id", &T::bank_item107_id, "bank_item108_id",
			&T::bank_item108_id, "bank_item109_id", &T::bank_item109_id,
			"bank_item110_id", &T::bank_item110_id, "bank_item111_id",
			&T::bank_item111_id, "bank_item112_id", &T::bank_item112_id,
			"bank_item113_id", &T::bank_item113_id, "bank_item114_id",
			&T::bank_item114_id, "bank_item115_id", &T::bank_item115_id,
			"bank_item116_id", &T::bank_item116_id, "bank_item117_id",
			&T::bank_item117_id, "bank_item118_id", &T::bank_item118_id,
			"bank_item119_id", &T::bank_item119_id, "bank_item120_id",
			&T::bank_item120_id, "bank_item121_id", &T::bank_item121_id,
			"bank_item122_id", &T::bank_item122_id, "bank_item123_id",
			&T::bank_item123_id, "bank_item124_id", &T::bank_item124_id,
			"bank_item125_id", &T::bank_item125_id, "bank_item126_id",
			&T::bank_item126_id, "bank_item127_id", &T::bank_item127_id,
			"bank_item128_id", &T::bank_item128_id, "bank_item129_id",
			&T::bank_item129_id, "bank_item130_id", &T::bank_item130_id,
			"bank_item131_id", &T::bank_item131_id, "bank_item132_id",
			&T::bank_item132_id, "bank_item133_id", &T::bank_item133_id,
			"bank_item134_id", &T::bank_item134_id, "bank_item135_id",
			&T::bank_item135_id, "bank_item136_id", &T::bank_item136_id,
			"bank_item137_id", &T::bank_item137_id, "bank_item138_id",
			&T::bank_item138_id, "bank_item139_id", &T::bank_item139_id,
			"bank_item140_id", &T::bank_item140_id, "bank_item141_id",
			&T::bank_item141_id, "bank_item142_id", &T::bank_item142_id,
			"bank_item143_id", &T::bank_item143_id, "bank_item144_id",
			&T::bank_item144_id, "bank_item145_id", &T::bank_item145_id,
			"bank_item146_id", &T::bank_item146_id, "bank_item147_id",
			&T::bank_item147_id, "bank_item148_id", &T::bank_item148_id,
			"bank_item149_id", &T::bank_item149_id, "bank_item150_id",
			&T::bank_item150_id, "bank_item151_id", &T::bank_item151_id,
			"bank_item152_id", &T::bank_item152_id, "bank_item153_id",
			&T::bank_item153_id, "bank_item154_id", &T::bank_item154_id,
			"bank_item155_id", &T::bank_item155_id, "bank_item156_id",
			&T::bank_item156_id, "bank_item157_id", &T::bank_item157_id,
			"bank_item158_id", &T::bank_item158_id, "bank_item159_id",
			&T::bank_item159_id, "bank_item160_id", &T::bank_item160_id,
			"bank_item161_id", &T::bank_item161_id, "bank_item162_id",
			&T::bank_item162_id, "bank_item163_id", &T::bank_item163_id,
			"bank_item164_id", &T::bank_item164_id, "bank_item165_id",
			&T::bank_item165_id, "bank_item166_id", &T::bank_item166_id,
			"bank_item167_id", &T::bank_item167_id, "bank_item168_id",
			&T::bank_item168_id, "bank_item169_id", &T::bank_item169_id,
			"bank_item170_id", &T::bank_item170_id, "bank_item171_id",
			&T::bank_item171_id, "bank_item172_id", &T::bank_item172_id,
			"bank_item173_id", &T::bank_item173_id, "bank_item174_id",
			&T::bank_item174_id, "bank_item175_id", &T::bank_item175_id,
			"bank_item176_id", &T::bank_item176_id, "bank_item177_id",
			&T::bank_item177_id, "bank_item178_id", &T::bank_item178_id,
			"bank_item179_id", &T::bank_item179_id, "bank_item180_id",
			&T::bank_item180_id, "bank_item181_id", &T::bank_item181_id,
			"bank_item182_id", &T::bank_item182_id, "bank_item183_id",
			&T::bank_item183_id, "bank_item184_id", &T::bank_item184_id,
			"bank_item185_id", &T::bank_item185_id, "bank_item186_id",
			&T::bank_item186_id, "bank_item187_id", &T::bank_item187_id,
			"bank_item188_id", &T::bank_item188_id, "bank_item189_id",
			&T::bank_item189_id, "bank_item190_id", &T::bank_item190_id,
			"bank_item191_id", &T::bank_item191_id, "bank_item192_id",
			&T::bank_item192_id, "bank_item193_id", &T::bank_item193_id,
			"bank_item194_id", &T::bank_item194_id, "bank_item195_id",
			&T::bank_item195_id, "bank_item196_id", &T::bank_item196_id,
			"bank_item197_id", &T::bank_item197_id, "bank_item198_id",
			&T::bank_item198_id, "bank_item199_id", &T::bank_item199_id,
			"bank_item200_id", &T::bank_item200_id, "bank_item201_id",
			&T::bank_item201_id, "bank_item202_id", &T::bank_item202_id,
			"bank_item203_id", &T::bank_item203_id, "bank_item204_id",
			&T::bank_item204_id, "bank_item205_id", &T::bank_item205_id,
			"bank_item206_id", &T::bank_item206_id, "bank_item207_id",
			&T::bank_item207_id, "bank_item208_id", &T::bank_item208_id,
			"bank_item209_id", &T::bank_item209_id, "bank_item210_id",
			&T::bank_item210_id, "bank_item211_id", &T::bank_item211_id,
			"bank_item212_id", &T::bank_item212_id, "bank_item213_id",
			&T::bank_item213_id, "bank_item214_id", &T::bank_item214_id,
			"bank_item215_id", &T::bank_item215_id, "bank_item216_id",
			&T::bank_item216_id, "bank_item217_id", &T::bank_item217_id,
			"bank_item218_id", &T::bank_item218_id, "bank_item219_id",
			&T::bank_item219_id, "bank_item220_id", &T::bank_item220_id,
			"bank_item221_id", &T::bank_item221_id, "bank_item222_id",
			&T::bank_item222_id, "bank_item223_id", &T::bank_item223_id,
			"bank_item224_id", &T::bank_item224_id, "bank_item225_id",
			&T::bank_item225_id, "bank_item226_id", &T::bank_item226_id,
			"bank_item227_id", &T::bank_item227_id, "bank_item228_id",
			&T::bank_item228_id, "bank_item229_id", &T::bank_item229_id,
			"bank_item230_id", &T::bank_item230_id, "bank_item231_id",
			&T::bank_item231_id, "bank_item232_id", &T::bank_item232_id,
			"bank_item233_id", &T::bank_item233_id, "bank_item234_id",
			&T::bank_item234_id, "bank_item235_id", &T::bank_item235_id,
			"bank_item236_id", &T::bank_item236_id, "bank_item237_id",
			&T::bank_item237_id, "bank_item238_id", &T::bank_item238_id,
			"bank_item239_id", &T::bank_item239_id, "bank_item240_id",
			&T::bank_item240_id, "bank_item241_id", &T::bank_item241_id,
			"bank_item242_id", &T::bank_item242_id, "bank_item243_id",
			&T::bank_item243_id, "bank_item244_id", &T::bank_item244_id,
			"bank_item245_id", &T::bank_item245_id, "bank_item246_id",
			&T::bank_item246_id, "bank_item247_id", &T::bank_item247_id,
			"bank_item248_id", &T::bank_item248_id, "bank_item249_id",
			&T::bank_item249_id, "bank_item250_id", &T::bank_item250_id,
			"bank_item251_id", &T::bank_item251_id, "bank_item252_id",
			&T::bank_item252_id, "bank_item253_id", &T::bank_item253_id,
			"bank_item254_id", &T::bank_item254_id, "bank_item255_id",
			&T::bank_item255_id, "bank_item256_id", &T::bank_item256_id,
			"bank_item257_id", &T::bank_item257_id, "bank_item258_id",
			&T::bank_item258_id, "bank_item259_id", &T::bank_item259_id,
			"bank_item260_id", &T::bank_item260_id, "bank_item261_id",
			&T::bank_item261_id, "bank_item262_id", &T::bank_item262_id,
			"bank_item263_id", &T::bank_item263_id, "bank_item264_id",
			&T::bank_item264_id, "bank_item265_id", &T::bank_item265_id,
			"bank_item266_id", &T::bank_item266_id, "bank_item267_id",
			&T::bank_item267_id, "bank_item268_id", &T::bank_item268_id,
			"bank_item269_id", &T::bank_item269_id, "bank_item270_id",
			&T::bank_item270_id, "bank_item271_id", &T::bank_item271_id,
			"bank_item272_id", &T::bank_item272_id, "bank_item273_id",
			&T::bank_item273_id, "bank_item274_id", &T::bank_item274_id,
			"bank_item275_id", &T::bank_item275_id, "bank_item276_id",
			&T::bank_item276_id, "bank_item277_id", &T::bank_item277_id,
			"bank_item278_id", &T::bank_item278_id, "bank_item279_id",
			&T::bank_item279_id, "bank_item280_id", &T::bank_item280_id,
			"bank_item281_id", &T::bank_item281_id, "bank_item282_id",
			&T::bank_item282_id, "bank_item283_id", &T::bank_item283_id,
			"bank_item284_id", &T::bank_item284_id, "bank_item285_id",
			&T::bank_item285_id, "bank_item286_id", &T::bank_item286_id,
			"bank_item287_id", &T::bank_item287_id, "bank_item288_id",
			&T::bank_item288_id, "bank_item289_id", &T::bank_item289_id,
			"bank_item290_id", &T::bank_item290_id, "bank_item291_id",
			&T::bank_item291_id, "bank_item292_id", &T::bank_item292_id,
			"bank_item293_id", &T::bank_item293_id, "bank_item294_id",
			&T::bank_item294_id, "bank_item295_id", &T::bank_item295_id,
			"bank_item296_id", &T::bank_item296_id, "bank_item297_id",
			&T::bank_item297_id, "bank_item298_id", &T::bank_item298_id,
			"bank_item299_id", &T::bank_item299_id, "bank_item300_id",
			&T::bank_item300_id, "bank_item301_id", &T::bank_item301_id,
			"bank_item302_id", &T::bank_item302_id, "bank_item303_id",
			&T::bank_item303_id, "bank_item304_id", &T::bank_item304_id,
			"bank_item305_id", &T::bank_item305_id, "bank_item306_id",
			&T::bank_item306_id, "bank_item307_id", &T::bank_item307_id,
			"bank_item308_id", &T::bank_item308_id, "bank_item309_id",
			&T::bank_item309_id, "bank_item310_id", &T::bank_item310_id,
			"bank_item311_id", &T::bank_item311_id, "bank_item312_id",
			&T::bank_item312_id, "bank_item313_id", &T::bank_item313_id,
			"bank_item314_id", &T::bank_item314_id, "bank_item315_id",
			&T::bank_item315_id, "bank_item316_id", &T::bank_item316_id,
			"bank_item317_id", &T::bank_item317_id, "bank_item318_id",
			&T::bank_item318_id, "bank_item319_id", &T::bank_item319_id,
			"bank_item320_id", &T::bank_item320_id, "bank_item321_id",
			&T::bank_item321_id, "bank_item322_id", &T::bank_item322_id,
			"bank_item323_id", &T::bank_item323_id, "bank_item324_id",
			&T::bank_item324_id, "bank_item325_id", &T::bank_item325_id,
			"bank_item326_id", &T::bank_item326_id, "bank_item327_id",
			&T::bank_item327_id, "bank_item328_id", &T::bank_item328_id,
			"bank_item329_id", &T::bank_item329_id, "bank_item330_id",
			&T::bank_item330_id, "bank_item331_id", &T::bank_item331_id,
			"bank_item332_id", &T::bank_item332_id, "bank_item333_id",
			&T::bank_item333_id, "bank_item334_id", &T::bank_item334_id,
			"bank_item335_id", &T::bank_item335_id, "bank_item336_id",
			&T::bank_item336_id, "bank_item337_id", &T::bank_item337_id,
			"bank_item338_id", &T::bank_item338_id, "bank_item339_id",
			&T::bank_item339_id, "bank_item340_id", &T::bank_item340_id,
			"bank_item341_id", &T::bank_item341_id, "bank_item342_id",
			&T::bank_item342_id, "bank_item343_id", &T::bank_item343_id,
			"bank_item344_id", &T::bank_item344_id, "bank_item345_id",
			&T::bank_item345_id, "bank_item346_id", &T::bank_item346_id,
			"bank_item347_id", &T::bank_item347_id, "bank_item348_id",
			&T::bank_item348_id, "bank_item349_id", &T::bank_item349_id,
			"bank_item350_id", &T::bank_item350_id, "bank_item351_id",
			&T::bank_item351_id, "bank_item352_id", &T::bank_item352_id,
			"bank_item353_id", &T::bank_item353_id, "bank_item354_id",
			&T::bank_item354_id, "bank_item355_id", &T::bank_item355_id,
			"bank_item356_id", &T::bank_item356_id, "bank_item357_id",
			&T::bank_item357_id, "bank_item358_id", &T::bank_item358_id,
			"bank_item359_id", &T::bank_item359_id, "bank_item360_id",
			&T::bank_item360_id, "bank_item361_id", &T::bank_item361_id,
			"bank_item362_id", &T::bank_item362_id, "bank_item363_id",
			&T::bank_item363_id, "bank_item364_id", &T::bank_item364_id,
			"bank_item365_id", &T::bank_item365_id, "bank_item366_id",
			&T::bank_item366_id, "bank_item367_id", &T::bank_item367_id,
			"bank_item368_id", &T::bank_item368_id, "bank_item369_id",
			&T::bank_item369_id, "bank_item370_id", &T::bank_item370_id,
			"bank_item371_id", &T::bank_item371_id, "bank_item372_id",
			&T::bank_item372_id, "bank_item373_id", &T::bank_item373_id,
			"bank_item374_id", &T::bank_item374_id, "bank_item375_id",
			&T::bank_item375_id, "bank_item376_id", &T::bank_item376_id,
			"bank_item377_id", &T::bank_item377_id, "bank_item378_id",
			&T::bank_item378_id, "bank_item379_id", &T::bank_item379_id,
			"bank_item380_id", &T::bank_item380_id, "bank_item381_id",
			&T::bank_item381_id, "bank_item382_id", &T::bank_item382_id,
			"bank_item383_id", &T::bank_item383_id, "bank_item384_id",
			&T::bank_item384_id, "bank_item385_id", &T::bank_item385_id,
			"bank_item386_id", &T::bank_item386_id, "bank_item387_id",
			&T::bank_item387_id, "bank_item388_id", &T::bank_item388_id,
			"bank_item389_id", &T::bank_item389_id, "bank_item390_id",
			&T::bank_item390_id, "bank_item391_id", &T::bank_item391_id,
			"bank_item392_id", &T::bank_item392_id, "bank_item393_id",
			&T::bank_item393_id, "bank_item394_id", &T::bank_item394_id,
			"bank_item395_id", &T::bank_item395_id, "bank_item396_id",
			&T::bank_item396_id, "bank_item397_id", &T::bank_item397_id,
			"bank_item398_id", &T::bank_item398_id, "bank_item399_id",
			&T::bank_item399_id, "bank_item400_id", &T::bank_item400_id,
			"bank_item401_id", &T::bank_item401_id, "bank_item402_id",
			&T::bank_item402_id, "bank_item403_id", &T::bank_item403_id,
			"bank_item404_id", &T::bank_item404_id, "bank_item405_id",
			&T::bank_item405_id, "bank_item406_id", &T::bank_item406_id,
			"bank_item407_id", &T::bank_item407_id, "bank_item408_id",
			&T::bank_item408_id, "bank_item409_id", &T::bank_item409_id,
			"bank_item410_id", &T::bank_item410_id, "bank_item411_id",
			&T::bank_item411_id, "bank_item412_id", &T::bank_item412_id,
			"bank_item413_id", &T::bank_item413_id, "bank_item414_id",
			&T::bank_item414_id, "bank_item415_id", &T::bank_item415_id,
			"bank_item416_id", &T::bank_item416_id, "bank_item417_id",
			&T::bank_item417_id, "bank_item418_id", &T::bank_item418_id,
			"bank_item419_id", &T::bank_item419_id, "bank_item420_id",
			&T::bank_item420_id, "bank_item421_id", &T::bank_item421_id,
			"bank_item422_id", &T::bank_item422_id, "bank_item423_id",
			&T::bank_item423_id, "bank_item424_id", &T::bank_item424_id,
			"bank_item425_id", &T::bank_item425_id, "bank_item426_id",
			&T::bank_item426_id, "bank_item427_id", &T::bank_item427_id,
			"bank_item428_id", &T::bank_item428_id, "bank_item429_id",
			&T::bank_item429_id, "bank_item430_id", &T::bank_item430_id,
			"bank_item431_id", &T::bank_item431_id, "bank_item432_id",
			&T::bank_item432_id, "bank_item433_id", &T::bank_item433_id,
			"bank_item434_id", &T::bank_item434_id, "bank_item435_id",
			&T::bank_item435_id, "bank_item436_id", &T::bank_item436_id,
			"bank_item437_id", &T::bank_item437_id, "bank_item438_id",
			&T::bank_item438_id, "bank_item439_id", &T::bank_item439_id,
			"bank_item440_id", &T::bank_item440_id, "bank_item441_id",
			&T::bank_item441_id, "bank_item442_id", &T::bank_item442_id,
			"bank_item443_id", &T::bank_item443_id, "bank_item444_id",
			&T::bank_item444_id, "bank_item445_id", &T::bank_item445_id,
			"bank_item446_id", &T::bank_item446_id, "bank_item447_id",
			&T::bank_item447_id, "bank_item448_id", &T::bank_item448_id,
			"bank_item449_id", &T::bank_item449_id, "bank_item450_id",
			&T::bank_item450_id);
	};
};

struct Character {
	int64_t     id;
	int64_t     user_id;
	std::string name;
	std::string locale;
	std::string gender;
	std::string title;
	int64_t     game_currency;
	int64_t     xp;
	int64_t     level;
	std::string description;
	std::string note;
	int64_t     ts_last_action;
	int64_t     online_status;
	int64_t     score_honor;
	int64_t     score_level;
	int64_t     stat_points_available;
	int64_t     stat_base_stamina;
	int64_t     stat_base_strength;
	int64_t     stat_base_critical_rating;
	int64_t     stat_base_dodge_rating;
	int64_t     stat_total_stamina;
	int64_t     stat_total_strength;
	int64_t     stat_total_critical_rating;
	int64_t     stat_total_dodge_rating;
	int64_t     stat_weapon_damage;
	int64_t     stat_total;
	int64_t     stat_bought_stamina;
	int64_t     stat_bought_strength;
	int64_t     stat_bought_critical_rating;
	int64_t     stat_bought_dodge_rating;
	std::string active_quest_booster_id;
	int64_t     ts_active_quest_boost_expires;
	std::string active_stats_booster_id;
	int64_t     ts_active_stats_boost_expires;
	std::string active_work_booster_id;
	int64_t     ts_active_work_boost_expires;
	int64_t     ts_active_sense_boost_expires;
	std::string active_league_booster_id;
	int64_t     ts_active_league_boost_expires;
	int64_t     ts_active_multitasking_boost_expires;
	int64_t     ts_active_training_sense_boost_expires;
	int64_t     max_quest_stage;
	int64_t     current_quest_stage;
	int64_t     quest_energy;
	int64_t     max_quest_energy;
	int64_t     ts_last_quest_energy_refill;
	int64_t     quest_energy_refill_amount_today;
	int64_t     quest_reward_training_sessions_rewarded_today;
	int64_t     active_quest_id;
	std::string quest_pool;
	int64_t     honor;
	int64_t     ts_last_duel;
	int64_t     active_duel_id;
	int64_t     duel_stamina;
	int64_t     max_duel_stamina;
	int64_t     ts_last_duel_stamina_change;
	int64_t     duel_stamina_cost;
	int64_t     ts_last_duel_enemies_refresh;
	std::string current_work_offer_id;
	int64_t     active_work_id;
	int64_t     active_training_id;
	std::string training_pool;
	int64_t     ts_last_training_finished;
	int64_t     ts_last_training_refresh;
	int64_t     training_energy;
	int64_t     max_training_energy;
	int64_t     ts_last_training_energy_change;
	int64_t     stat_trained_stamina;
	int64_t     stat_trained_strength;
	int64_t     stat_trained_critical_rating;
	int64_t     stat_trained_dodge_rating;
	int64_t     training_count;
	int64_t     max_training_count;
	int64_t     active_worldboss_attack_id;
	int64_t     active_dungeon_quest_id;
	int64_t     ts_last_dungeon_quest_fail;
	int64_t     max_dungeon_index;
	int64_t     appearance_skin_color;
	int64_t     appearance_hair_color;
	int64_t     appearance_hair_type;
	int64_t     appearance_head_type;
	int64_t     appearance_eyes_type;
	int64_t     appearance_eyebrows_type;
	int64_t     appearance_nose_type;
	int64_t     appearance_mouth_type;
	int64_t     appearance_facial_hair_type;
	int64_t     appearance_decoration_type;
	bool        show_mask;
	bool        show_cape;
	std::string tutorial_flags;
	int64_t     guild_id;
	int64_t     guild_rank;
	int64_t     finished_guild_battle_attack_id;
	int64_t     finished_guild_battle_defense_id;
	int64_t     finished_guild_dungeon_battle_id;
	int64_t     guild_donated_game_currency;
	int64_t     guild_donated_premium_currency;
	int64_t     guild_competition_points_gathered;
	int64_t     pending_guild_competition_tournament_rewards;
	bool        new_guild_competition_tournament;
	int64_t     pending_solo_guild_competition_tournament_rewards;
	int64_t     unread_mass_system_messages;
	bool        friend_messages_only;
	int64_t     worldboss_event_id;
	int64_t     worldboss_event_attack_count;
	int64_t     ts_last_wash_item;
	int64_t     ts_last_daily_login_bonus;
	int64_t     daily_login_bonus_day;
	int64_t     pending_tournament_rewards;
	int64_t     pending_global_tournament_rewards;
	int64_t     ts_last_shop_refresh;
	int64_t     max_free_shop_refreshes;
	int64_t     shop_refreshes;
	int64_t     event_quest_id;
	int64_t     hidden_object_event_quest_id;
	int64_t     draw_event_id;
	int64_t     treasure_event_id;
	std::string friend_data;
	std::string unused_resources;
	std::string used_resources;
	int64_t     league_points;
	int64_t     league_group_id;
	int64_t     active_league_fight_id;
	int64_t     ts_last_league_fight;
	int64_t     league_fight_count;
	std::string league_opponents;
	int64_t     ts_last_league_opponents_refresh;
	int64_t     league_stamina;
	int64_t     max_league_stamina;
	int64_t     ts_last_league_stamina_change;
	int64_t     league_stamina_cost;
	int64_t     pending_league_tournament_rewards;
	int64_t     herobook_objectives_renewed_today;
	int64_t     current_slotmachine_spin;
	int64_t     slotmachine_spin_count;
	int64_t     ts_last_slotmachine_refill;
	std::string new_user_voucher_ids;
	int64_t     current_energy_storage;
	int64_t     current_training_storage;
	int64_t     active_story_dungeon_attack_id;
	std::string storygoal;
	int64_t     active_season_progress_id;

	struct glaze {
		static constexpr auto value = glz::object(
			"id", &Character::id, "user_id", &Character::user_id, "name",
			&Character::name, "locale", &Character::locale, "gender",
			&Character::gender, "title", &Character::title,
			"game_currency", &Character::game_currency, "xp",
			&Character::xp, "level", &Character::level, "description",
			&Character::description, "note", &Character::note,
			"ts_last_action", &Character::ts_last_action, "online_status",
			&Character::online_status, "score_honor",
			&Character::score_honor, "score_level",
			&Character::score_level, "stat_points_available",
			&Character::stat_points_available, "stat_base_stamina",
			&Character::stat_base_stamina, "stat_base_strength",
			&Character::stat_base_strength, "stat_base_critical_rating",
			&Character::stat_base_critical_rating,
			"stat_base_dodge_rating", &Character::stat_base_dodge_rating,
			"stat_total_stamina", &Character::stat_total_stamina,
			"stat_total_strength", &Character::stat_total_strength,
			"stat_total_critical_rating",
			&Character::stat_total_critical_rating,
			"stat_total_dodge_rating", &Character::stat_total_dodge_rating,
			"stat_weapon_damage", &Character::stat_weapon_damage,
			"stat_total", &Character::stat_total, "stat_bought_stamina",
			&Character::stat_bought_stamina, "stat_bought_strength",
			&Character::stat_bought_strength,
			"stat_bought_critical_rating",
			&Character::stat_bought_critical_rating,
			"stat_bought_dodge_rating",
			&Character::stat_bought_dodge_rating,
			"active_quest_booster_id", &Character::active_quest_booster_id,
			"ts_active_quest_boost_expires",
			&Character::ts_active_quest_boost_expires,
			"active_stats_booster_id", &Character::active_stats_booster_id,
			"ts_active_stats_boost_expires",
			&Character::ts_active_stats_boost_expires,
			"active_work_booster_id", &Character::active_work_booster_id,
			"ts_active_work_boost_expires",
			&Character::ts_active_work_boost_expires,
			"ts_active_sense_boost_expires",
			&Character::ts_active_sense_boost_expires,
			"active_league_booster_id",
			&Character::active_league_booster_id,
			"ts_active_league_boost_expires",
			&Character::ts_active_league_boost_expires,
			"ts_active_multitasking_boost_expires",
			&Character::ts_active_multitasking_boost_expires,
			"ts_active_training_sense_boost_expires",
			&Character::ts_active_training_sense_boost_expires,
			"max_quest_stage", &Character::max_quest_stage,
			"current_quest_stage", &Character::current_quest_stage,
			"quest_energy", &Character::quest_energy, "max_quest_energy",
			&Character::max_quest_energy, "ts_last_quest_energy_refill",
			&Character::ts_last_quest_energy_refill,
			"quest_energy_refill_amount_today",
			&Character::quest_energy_refill_amount_today,
			"quest_reward_training_sessions_rewarded_today",
			&Character::quest_reward_training_sessions_rewarded_today,
			"active_quest_id", &Character::active_quest_id, "quest_pool",
			&Character::quest_pool, "honor", &Character::honor,
			"ts_last_duel", &Character::ts_last_duel, "active_duel_id",
			&Character::active_duel_id, "duel_stamina",
			&Character::duel_stamina, "max_duel_stamina",
			&Character::max_duel_stamina, "ts_last_duel_stamina_change",
			&Character::ts_last_duel_stamina_change, "duel_stamina_cost",
			&Character::duel_stamina_cost, "ts_last_duel_enemies_refresh",
			&Character::ts_last_duel_enemies_refresh,
			"current_work_offer_id", &Character::current_work_offer_id,
			"active_work_id", &Character::active_work_id,
			"active_training_id", &Character::active_training_id,
			"training_pool", &Character::training_pool,
			"ts_last_training_finished",
			&Character::ts_last_training_finished,
			"ts_last_training_refresh",
			&Character::ts_last_training_refresh, "training_energy",
			&Character::training_energy, "max_training_energy",
			&Character::max_training_energy,
			"ts_last_training_energy_change",
			&Character::ts_last_training_energy_change,
			"stat_trained_stamina", &Character::stat_trained_stamina,
			"stat_trained_strength", &Character::stat_trained_strength,
			"stat_trained_critical_rating",
			&Character::stat_trained_critical_rating,
			"stat_trained_dodge_rating",
			&Character::stat_trained_dodge_rating, "training_count",
			&Character::training_count, "max_training_count",
			&Character::max_training_count, "active_worldboss_attack_id",
			&Character::active_worldboss_attack_id,
			"active_dungeon_quest_id", &Character::active_dungeon_quest_id,
			"ts_last_dungeon_quest_fail",
			&Character::ts_last_dungeon_quest_fail, "max_dungeon_index",
			&Character::max_dungeon_index, "appearance_skin_color",
			&Character::appearance_skin_color, "appearance_hair_color",
			&Character::appearance_hair_color, "appearance_hair_type",
			&Character::appearance_hair_type, "appearance_head_type",
			&Character::appearance_head_type, "appearance_eyes_type",
			&Character::appearance_eyes_type, "appearance_eyebrows_type",
			&Character::appearance_eyebrows_type, "appearance_nose_type",
			&Character::appearance_nose_type, "appearance_mouth_type",
			&Character::appearance_mouth_type,
			"appearance_facial_hair_type",
			&Character::appearance_facial_hair_type,
			"appearance_decoration_type",
			&Character::appearance_decoration_type, "show_mask",
			&Character::show_mask, "show_cape", &Character::show_cape,
			"tutorial_flags", &Character::tutorial_flags, "guild_id",
			&Character::guild_id, "guild_rank", &Character::guild_rank,
			"finished_guild_battle_attack_id",
			&Character::finished_guild_battle_attack_id,
			"finished_guild_battle_defense_id",
			&Character::finished_guild_battle_defense_id,
			"finished_guild_dungeon_battle_id",
			&Character::finished_guild_dungeon_battle_id,
			"guild_donated_game_currency",
			&Character::guild_donated_game_currency,
			"guild_donated_premium_currency",
			&Character::guild_donated_premium_currency,
			"guild_competition_points_gathered",
			&Character::guild_competition_points_gathered,
			"pending_guild_competition_tournament_rewards",
			&Character::pending_guild_competition_tournament_rewards,
			"new_guild_competition_tournament",
			&Character::new_guild_competition_tournament,
			"pending_solo_guild_competition_tournament_rewards",
			&Character::pending_solo_guild_competition_tournament_rewards,
			"unread_mass_system_messages",
			&Character::unread_mass_system_messages,
			"friend_messages_only", &Character::friend_messages_only,
			"worldboss_event_id", &Character::worldboss_event_id,
			"worldboss_event_attack_count",
			&Character::worldboss_event_attack_count, "ts_last_wash_item",
			&Character::ts_last_wash_item, "ts_last_daily_login_bonus",
			&Character::ts_last_daily_login_bonus, "daily_login_bonus_day",
			&Character::daily_login_bonus_day,
			"pending_tournament_rewards",
			&Character::pending_tournament_rewards,
			"pending_global_tournament_rewards",
			&Character::pending_global_tournament_rewards,
			"ts_last_shop_refresh", &Character::ts_last_shop_refresh,
			"max_free_shop_refreshes", &Character::max_free_shop_refreshes,
			"shop_refreshes", &Character::shop_refreshes, "event_quest_id",
			&Character::event_quest_id, "hidden_object_event_quest_id",
			&Character::hidden_object_event_quest_id, "draw_event_id",
			&Character::draw_event_id, "treasure_event_id",
			&Character::treasure_event_id, "friend_data",
			&Character::friend_data, "unused_resources",
			&Character::unused_resources, "used_resources",
			&Character::used_resources, "league_points",
			&Character::league_points, "league_group_id",
			&Character::league_group_id, "active_league_fight_id",
			&Character::active_league_fight_id, "ts_last_league_fight",
			&Character::ts_last_league_fight, "league_fight_count",
			&Character::league_fight_count, "league_opponents",
			&Character::league_opponents,
			"ts_last_league_opponents_refresh",
			&Character::ts_last_league_opponents_refresh, "league_stamina",
			&Character::league_stamina, "max_league_stamina",
			&Character::max_league_stamina,
			"ts_last_league_stamina_change",
			&Character::ts_last_league_stamina_change,
			"league_stamina_cost", &Character::league_stamina_cost,
			"pending_league_tournament_rewards",
			&Character::pending_league_tournament_rewards,
			"herobook_objectives_renewed_today",
			&Character::herobook_objectives_renewed_today,
			"current_slotmachine_spin",
			&Character::current_slotmachine_spin, "slotmachine_spin_count",
			&Character::slotmachine_spin_count,
			"ts_last_slotmachine_refill",
			&Character::ts_last_slotmachine_refill, "new_user_voucher_ids",
			&Character::new_user_voucher_ids, "current_energy_storage",
			&Character::current_energy_storage, "current_training_storage",
			&Character::current_training_storage,
			"active_story_dungeon_attack_id",
			&Character::active_story_dungeon_attack_id, "storygoal",
			&Character::storygoal, "active_season_progress_id",
			&Character::active_season_progress_id);
	};
};

struct CollectedGoal {
	int64_t     value;
	std::string date;
};

struct CurrentGoalValue {
	int64_t value;
	int64_t current_value;
};

struct CurrentItemPatternValue {
	int64_t                  value;
	std::vector<std::string> collected_items;
	bool                     is_new;
};

struct CurrentOpticalChanges {
	int64_t     id;
	int64_t     character_id;
	int64_t     resource;
	int64_t     ts_last_free_chest;
	std::string available_chests;
	std::string active_options;
	std::string unlocked_options;
	bool        use_for_character;
	bool        use_for_quest;
	bool        use_for_duel;
	bool        use_for_league;
};

struct DailyBonusLookup {
	int64_t id;
	int64_t character_id;
	int64_t ts_last_reset;
	int64_t herobook_daily_completed;
	int64_t duel_battle_won;
	int64_t league_battle_won;
	int64_t hideout_battle_won;
	int64_t quest_energy_spent;
};

struct DailyBonusReward {
	int64_t     id;
	int64_t     character_id;
	int64_t     ts_creation;
	int64_t     status;
	int64_t     type;
	int64_t     value;
	std::string rewards;
};

struct DailyLoginBonusRewards {
	int64_t     id;
	int64_t     character_id;
	std::string date_key;
	int64_t     ts_creation;
	int64_t     status;
	std::string rewards;
};

struct DungeonQuest {
	int64_t     id;
	int64_t     character_id;
	int64_t     character_level;
	std::string identifier;
	int64_t     status;
	int64_t     battle_id;
	std::string rewards;
	int64_t     mode;
	int64_t     hardmode_difficulty;
	int64_t     dungeon_id;
};

struct Dungeon {
	int64_t     id;
	int64_t     character_id;
	std::string identifier;
	int64_t     status;
	int64_t     current_dungeon_quest_id;
	int64_t     progress_index;
	int64_t     mode;
	int64_t     hardmode_difficulty;
	int64_t     ts_last_complete;
};

struct EventQuest {
	int64_t     id;
	int64_t     character_id;
	std::string identifier;
	int64_t     status;
	int64_t     objective1_value;
	int64_t     objective2_value;
	int64_t     objective3_value;
	int64_t     objective4_value;
	int64_t     objective5_value;
	int64_t     objective6_value;
	int64_t     objective7_value;
	int64_t     objective8_value;
	int64_t     objective9_value;
	int64_t     objective10_value;
	int64_t     objective1_reward_item_id;
	int64_t     objective2_reward_item_id;
	int64_t     objective3_reward_item_id;
	int64_t     objective4_reward_item_id;
	int64_t     objective5_reward_item_id;
	int64_t     objective6_reward_item_id;
	int64_t     objective7_reward_item_id;
	int64_t     objective8_reward_item_id;
	int64_t     objective9_reward_item_id;
	int64_t     objective10_reward_item_id;
	std::string rewards;
	int64_t     reward_item1_id;
	std::string reward_item1_rewards;
	int64_t     reward_item2_id;
	std::string reward_item2_rewards;
	int64_t     reward_item3_id;
	std::string reward_item3_rewards;
	std::string end_date;
};

struct FinishedGuildBattleDefense {
	int64_t     id;
	int64_t     battle_time;
	int64_t     ts_attack;
	int64_t     guild_attacker_id;
	int64_t     guild_defender_id;
	int64_t     guild_winner_id;
	int64_t     status;
	std::string character_ids;
	std::string attacker_character_profiles;
	std::string defender_character_profiles;
	std::string rounds;
	std::string attacker_rewards;
	std::string defender_rewards;
};

struct Guild {
	int64_t     id;
	int64_t     ts_creation;
	int64_t     initiator_character_id;
	int64_t     leader_character_id;
	std::string name;
	std::string description;
	std::string note;
	std::string officer_note;
	std::string forum_page;
	int64_t     premium_currency;
	int64_t     game_currency;
	int64_t     status;
	bool        accept_members;
	std::string locale;
	int64_t     pending_guild_battle_attack_id;
	int64_t     pending_guild_battle_defense_id;
	int64_t     pending_guild_dungeon_battle_attack_id;
	int64_t     honor;
	std::string artifact_ids;
	int64_t     missiles;
	int64_t     auto_joins;
	int64_t     battles_fought;
	int64_t     battles_attacked;
	int64_t     battles_defended;
	int64_t     battles_won;
	int64_t     battles_lost;
	int64_t     artifacts_won;
	int64_t     artifacts_lost;
	int64_t     artifacts_owned_max;
	int64_t     artifacts_owned_current;
	int64_t     ts_last_artifact_released;
	int64_t     missiles_fired;
	int64_t     auto_joins_used;
	int64_t     dungeon_battles_fought;
	int64_t     dungeon_battles_won;
	int64_t     stat_points_available;
	int64_t     stat_guild_capacity;
	int64_t     stat_character_base_stats_boost;
	int64_t     stat_quest_xp_reward_boost;
	int64_t     stat_quest_game_currency_reward_boost;
	int64_t     arena_background;
	int64_t     emblem_background_shape;
	int64_t     emblem_background_color;
	int64_t     emblem_background_border_color;
	int64_t     emblem_icon_shape;
	int64_t     emblem_icon_color;
	int64_t     emblem_icon_size;
	bool        use_missiles_attack;
	bool        use_missiles_defense;
	bool        use_missiles_dungeon;
	bool        use_auto_joins_attack;
	bool        use_auto_joins_defense;
	bool        use_auto_joins_dungeon;
	int64_t     pending_leader_vote_id;
	int64_t     min_apply_level;
	int64_t     min_apply_honor;
	int64_t     min_apply_hideout_level;
	int64_t     min_apply_gem_level;
	bool        apply_open;
	bool        apply_open_mail;
	int64_t     guild_battle_tactics_attack_order;
	int64_t     guild_battle_tactics_attack_tactic;
	int64_t     guild_battle_tactics_defense_order;
	int64_t     guild_battle_tactics_defense_tactic;
	std::string active_training_booster_id;
	int64_t     ts_active_training_boost_expires;
	std::string active_quest_booster_id;
	int64_t     ts_active_quest_boost_expires;
	std::string active_duel_booster_id;
	int64_t     ts_active_duel_boost_expires;
	int64_t     guild_competition_reward_boost_factor;
	int64_t     ts_guild_competition_reward_boost_expires;
};

struct GuildBattleGuild {
	int64_t     ts_creation;
	std::string name;
	std::string description;
	int64_t     status;
	bool        accept_members;
	std::string locale;
	int64_t     honor;
	std::string artifact_ids;
	int64_t     battles_fought;
	int64_t     battles_attacked;
	int64_t     battles_defended;
	int64_t     battles_won;
	int64_t     battles_lost;
	int64_t     dungeon_battles_fought;
	int64_t     dungeon_battles_won;
	int64_t     missiles_fired;
	int64_t     auto_joins_used;
	int64_t     artifacts_won;
	int64_t     artifacts_lost;
	int64_t     artifacts_owned_max;
	int64_t     artifacts_owned_current;
	std::string forum_page;
	int64_t     stat_guild_capacity;
	int64_t     stat_character_base_stats_boost;
	int64_t     stat_quest_xp_reward_boost;
	int64_t     stat_quest_game_currency_reward_boost;
	int64_t     arena_background;
	int64_t     emblem_background_shape;
	int64_t     emblem_background_color;
	int64_t     emblem_background_border_color;
	int64_t     emblem_icon_shape;
	int64_t     emblem_icon_color;
	int64_t     emblem_icon_size;
	int64_t     min_apply_level;
	int64_t     min_apply_honor;
	int64_t     min_apply_hideout_level;
	int64_t     min_apply_gem_level;
	std::string active_training_booster_id;
	int64_t     ts_active_training_boost_expires;
	std::string active_quest_booster_id;
	int64_t     ts_active_quest_boost_expires;
	std::string active_duel_booster_id;
	int64_t     ts_active_duel_boost_expires;
	bool        apply_open;
	int64_t     guild_competition_reward_boost_factor;
	int64_t     ts_guild_competition_reward_boost_expires;
	int64_t     id;
};

struct GuildCompetitionData {
	int64_t                  id;
	int64_t                  status;
	int64_t                  ts_end;
	int64_t                  ts_start;
	std::string              identifier;
	int64_t                  rank;
	int64_t                  score;
	std::vector<std::string> worldboss_start_times;
};

struct GuildMember {
	int64_t     id;
	int64_t     user_id;
	std::string server_id;
	std::string name;
	std::string gender;
	int64_t     level;
	int64_t     honor;
	int64_t     guild_rank;
	int64_t     ts_guild_joined;
	int64_t     ts_last_online;
	int64_t     last_action;
	int64_t     online_status;
	int64_t     game_currency_donation;
	int64_t     premium_currency_donation;
	int64_t     guild_competition_points_gathered;
	int64_t     stat_total_stamina;
	int64_t     stat_total_strength;
	int64_t     stat_total_critical_rating;
	int64_t     stat_total_dodge_rating;
};

struct Hideout {
	int64_t     id;
	int64_t     character_id;
	int64_t     hideout_points;
	int64_t     current_level;
	int64_t     idle_worker_count;
	int64_t     max_worker_count;
	int64_t     ts_time_worker_expires;
	int64_t     current_resource_glue;
	int64_t     max_resource_glue;
	int64_t     current_resource_stone;
	int64_t     max_resource_stone;
	int64_t     current_attacker_units;
	int64_t     max_attacker_units;
	int64_t     current_defender_units;
	int64_t     max_defender_units;
	int64_t     current_opponent_id;
	std::string current_opponent_server_id;
	bool        current_opponent_chest_reward;
	int64_t     ts_last_opponent_refresh;
	int64_t     active_battle_id;
	int64_t     ts_last_lost_attack;
	int64_t     current_worker_level;
	int64_t     current_wall_level;
	int64_t     current_barracks_level;
	int64_t     max_barracks_level;
	int64_t     current_gem_production_level;
	int64_t     current_broker_level;
	int64_t     current_robot_storage_level;
	int64_t     room_slot_0_0;
	int64_t     room_slot_0_1;
	int64_t     room_slot_0_2;
	int64_t     room_slot_0_3;
	int64_t     room_slot_0_4;
	int64_t     room_slot_1_0;
	int64_t     room_slot_1_1;
	int64_t     room_slot_1_2;
	int64_t     room_slot_1_3;
	int64_t     room_slot_1_4;
	int64_t     room_slot_2_0;
	int64_t     room_slot_2_1;
	int64_t     room_slot_2_2;
	int64_t     room_slot_2_3;
	int64_t     room_slot_2_4;
	int64_t     room_slot_3_0;
	int64_t     room_slot_3_1;
	int64_t     room_slot_3_2;
	int64_t     room_slot_3_3;
	int64_t     room_slot_3_4;
	int64_t     room_slot_4_0;
	int64_t     room_slot_4_1;
	int64_t     room_slot_4_2;
	int64_t     room_slot_4_3;
	int64_t     room_slot_4_4;
	int64_t     room_slot_5_0;
	int64_t     room_slot_5_1;
	int64_t     room_slot_5_2;
	int64_t     room_slot_5_3;
	int64_t     room_slot_5_4;
	int64_t     room_slot_6_0;
	int64_t     room_slot_6_1;
	int64_t     room_slot_6_2;
	int64_t     room_slot_6_3;
	int64_t     room_slot_6_4;
	int64_t     room_slot_7_0;
	int64_t     room_slot_7_1;
	int64_t     room_slot_7_2;
	int64_t     room_slot_7_3;
	int64_t     room_slot_7_4;
	int64_t     room_slot_8_0;
	int64_t     room_slot_8_1;
	int64_t     room_slot_8_2;
	int64_t     room_slot_8_3;
	int64_t     room_slot_8_4;
	int64_t     room_slot_9_0;
	int64_t     room_slot_9_1;
	int64_t     room_slot_9_2;
	int64_t     room_slot_9_3;
	int64_t     room_slot_9_4;
};

struct HideoutRoom {
	int64_t                      id;
	boost::optional<int64_t>     hideout_id;
	boost::optional<int64_t>     ts_creation;
	boost::optional<std::string> identifier;
	boost::optional<int64_t>     status;
	boost::optional<int64_t>     level;
	int64_t                      current_resource_amount;
	int64_t                      max_resource_amount;
	int64_t                      ts_last_resource_change;
	boost::optional<int64_t>     ts_activity_end;
	boost::optional<int64_t>     current_generator_level;
	boost::optional<int64_t>     additional_value_1;
	boost::optional<std::string> additional_value_2;
};

struct Inventory {
	int64_t     id;
	int64_t     character_id;
	int64_t     mask_item_id;
	int64_t     cape_item_id;
	int64_t     suit_item_id;
	int64_t     belt_item_id;
	int64_t     boots_item_id;
	int64_t     weapon_item_id;
	int64_t     gadget_item_id;
	int64_t     missiles_item_id;
	int64_t     missiles1_item_id;
	int64_t     missiles2_item_id;
	int64_t     missiles3_item_id;
	int64_t     missiles4_item_id;
	int64_t     sidekick_id;
	int64_t     bag_item1_id;
	int64_t     bag_item2_id;
	int64_t     bag_item3_id;
	int64_t     bag_item4_id;
	int64_t     bag_item5_id;
	int64_t     bag_item6_id;
	int64_t     bag_item7_id;
	int64_t     bag_item8_id;
	int64_t     bag_item9_id;
	int64_t     bag_item10_id;
	int64_t     bag_item11_id;
	int64_t     bag_item12_id;
	int64_t     bag_item13_id;
	int64_t     bag_item14_id;
	int64_t     bag_item15_id;
	int64_t     bag_item16_id;
	int64_t     bag_item17_id;
	int64_t     bag_item18_id;
	int64_t     shop_item1_id;
	int64_t     shop_item2_id;
	int64_t     shop_item3_id;
	int64_t     shop_item4_id;
	int64_t     shop_item5_id;
	int64_t     shop_item6_id;
	int64_t     shop_item7_id;
	int64_t     shop_item8_id;
	int64_t     shop_item9_id;
	int64_t     shop2_item1_id;
	int64_t     shop2_item2_id;
	int64_t     shop2_item3_id;
	int64_t     shop2_item4_id;
	int64_t     shop2_item5_id;
	int64_t     shop2_item6_id;
	int64_t     shop2_item7_id;
	int64_t     shop2_item8_id;
	int64_t     shop2_item9_id;
	std::string item_set_data;
	std::string sidekick_data;

	struct glaze {
		using T                     = Inventory;
		static constexpr auto value = glz::object(
			&T::id, &T::character_id, &T::mask_item_id, &T::cape_item_id,
			&T::suit_item_id, &T::belt_item_id, &T::boots_item_id,
			&T::weapon_item_id, &T::gadget_item_id, &T::missiles_item_id,
			&T::missiles1_item_id, &T::missiles2_item_id,
			&T::missiles3_item_id, &T::missiles4_item_id, &T::sidekick_id,
			&T::bag_item1_id, &T::bag_item2_id, &T::bag_item3_id,
			&T::bag_item4_id, &T::bag_item5_id, &T::bag_item6_id,
			&T::bag_item7_id, &T::bag_item8_id, &T::bag_item9_id,
			&T::bag_item10_id, &T::bag_item11_id, &T::bag_item12_id,
			&T::bag_item13_id, &T::bag_item14_id, &T::bag_item15_id,
			&T::bag_item16_id, &T::bag_item17_id, &T::bag_item18_id,
			&T::shop_item1_id, &T::shop_item2_id, &T::shop_item3_id,
			&T::shop_item4_id, &T::shop_item5_id, &T::shop_item6_id,
			&T::shop_item7_id, &T::shop_item8_id, &T::shop_item9_id,
			&T::shop2_item1_id, &T::shop2_item2_id, &T::shop2_item3_id,
			&T::shop2_item4_id, &T::shop2_item5_id, &T::shop2_item6_id,
			&T::shop2_item7_id, &T::shop2_item8_id, &T::shop2_item9_id,
			&T::item_set_data, &T::sidekick_data);
	};
};

struct DataItem {
	int64_t     id;
	int64_t     character_id;
	std::string identifier;
	int64_t     type;
	int64_t     quality;
	int64_t     required_level;
	int64_t     charges;
	int64_t     item_level;
	int64_t     ts_availability_start;
	int64_t     ts_availability_end;
	bool        premium_item;
	int64_t     buy_price;
	int64_t     sell_price;
	int64_t     stat_stamina;
	int64_t     stat_strength;
	int64_t     stat_critical_rating;
	int64_t     stat_dodge_rating;
	int64_t     stat_weapon_damage;

	struct glaze {
		using T                     = DataItem;
		static constexpr auto value = glz::object(
			&T::id, &T::character_id, &T::identifier, &T::type,
			&T::quality, &T::required_level, &T::charges, &T::item_level,
			&T::ts_availability_start, &T::ts_availability_end,
			&T::premium_item, &T::buy_price, &T::sell_price,
			&T::stat_stamina, &T::stat_strength, &T::stat_critical_rating,
			&T::stat_dodge_rating, &T::stat_weapon_damage);
	};
};

struct LocalNotificationSetting {
	int64_t     id;
	bool        active;
	bool        vibrate;
	std::string title;
	std::string body;

	struct glaze {
		using T                     = LocalNotificationSetting;
		static constexpr auto value = glz::object(
			&T::id, &T::active, &T::vibrate, &T::title, &T::body);
	};
};

struct NewShop {
	std::string variation;

	struct glaze {
		using T                     = NewShop;
		static constexpr auto value = glz::object(&T::variation);
	};
};

struct MabExperiments {
	NewShop progress_offer_layout;
	NewShop new_shop;

	struct glaze {
		using T = MabExperiments;
		static constexpr auto value
			= glz::object(&T::progress_offer_layout, &T::new_shop);
	};
};

struct NewsItem {
	int64_t     type;
	std::string value;

	struct glaze {
		using T                     = NewsItem;
		static constexpr auto value = glz::object(&T::type, &T::value);
	};
};

struct News {
	std::string           id;
	int64_t               category;
	int64_t               date;
	std::vector<NewsItem> items;
};

struct Quest {
	int64_t     id;
	int64_t     character_id;
	std::string identifier;
	int64_t     type;
	int64_t     stage;
	int64_t     level;
	int64_t     status;
	int64_t     duration_type;
	int64_t     duration_raw;
	int64_t     duration;
	int64_t     ts_complete;
	int64_t     energy_cost;
	int64_t     fight_difficulty;
	std::string fight_npc_identifier;
	int64_t     fight_battle_id;
	int64_t     used_resources;
	std::string rewards;

	struct glaze {
		using T                     = Quest;
		static constexpr auto value = glz::object(
			&T::id, &T::character_id, &T::identifier, &T::type, &T::stage,
			&T::level, &T::status, &T::duration_type, &T::duration_raw,
			&T::duration, &T::ts_complete, &T::energy_cost,
			&T::fight_difficulty, &T::fight_npc_identifier,
			&T::fight_battle_id, &T::used_resources, &T::rewards);
	};
};

struct SeasonProgress {
	int64_t     id;
	int64_t     season_id;
	int64_t     character_id;
	int64_t     status;
	int64_t     ts_created;
	int64_t     ts_start;
	int64_t     ts_end;
	std::string identifier;
	int64_t     season_points;
	bool        premium_unlocked;

	struct glaze {
		using T                     = SeasonProgress;
		static constexpr auto value = glz::object(
			&T::id, &T::season_id, &T::character_id, &T::status,
			&T::ts_created, &T::ts_start, &T::ts_end, &T::identifier,
			&T::season_points, &T::premium_unlocked);
	};
};

struct StoryDungeonLookup {
	int64_t     id;
	int64_t     character_id;
	std::string story_dungeon_step_ids;
	std::string story_dungeon_steps;

	struct glaze {
		using T                     = StoryDungeonLookup;
		static constexpr auto value = glz::object(
			&T::id, &T::character_id, &T::story_dungeon_step_ids,
			&T::story_dungeon_steps);
	};
};

struct StoryDungeonStep {
	int64_t     id;
	int64_t     character_id;
	int64_t     story_dungeon_index;
	int64_t     step_index;
	int64_t     status;
	int64_t     repeat;
	int64_t     points_collected;
	int64_t     ts_complete;
	int64_t     ts_last_attack;
	std::string rewards;
	std::string battle_ids;

	struct glaze {
		using T                     = StoryDungeonStep;
		static constexpr auto value = glz::object(
			&T::id, &T::character_id, &T::story_dungeon_index,
			&T::step_index, &T::status, &T::repeat, &T::points_collected,
			&T::ts_complete, &T::ts_last_attack, &T::rewards,
			&T::battle_ids);
	};
};

struct The8612 {
	int64_t     id;
	std::string type;
	int64_t     unread;

	struct glaze {
		using T = The8612;
		static constexpr auto value
			= glz::object(&T::id, &T::type, &T::unread);
	};
};

struct M {
	The8612 the_8612;

	struct glaze {
		using T                     = M;
		static constexpr auto value = glz::object(&T::the_8612);
	};
};

struct StreamsInfo {
	M                              m;
	std::map<std::string, The8612> p;
	std::map<std::string, The8612> r;
	M                              s;
	std::map<std::string, The8612> v;

	struct glaze {
		using T = StreamsInfo;
		static constexpr auto value
			= glz::object(&T::m, &T::p, &T::r, &T::s, &T::v);
	};
};

struct TitleElement {
	std::string identifier;
	std::string date;

	struct glaze {
		using T = TitleElement;
		static constexpr auto value
			= glz::object(&T::identifier, &T::date);
	};
};

struct Training {
	int64_t     id;
	int64_t     character_id;
	std::string setting;
	int64_t     status;
	int64_t     training_cost;
	int64_t     energy;
	int64_t     needed_energy;
	int64_t     stat_type;
	int64_t     duration;
	int64_t     ts_end;
	int64_t     training_quest_id;
	std::string training_quest_pool;
	int64_t     claimed_stars;
	std::string rewards_star_1;
	std::string rewards_star_2;
	std::string rewards_star_3;
	int64_t     stat_points_star_1;
	int64_t     stat_points_star_2;
	int64_t     stat_points_star_3;

	struct glaze {
		using T                     = Training;
		static constexpr auto value = glz::object(
			&T::id, &T::character_id, &T::setting, &T::status,
			&T::training_cost, &T::energy, &T::needed_energy,
			&T::stat_type, &T::duration, &T::ts_end, &T::training_quest_id,
			&T::training_quest_pool, &T::claimed_stars, &T::rewards_star_1,
			&T::rewards_star_2, &T::rewards_star_3, &T::stat_points_star_1,
			&T::stat_points_star_2, &T::stat_points_star_3);
	};
};

struct User {
	int64_t     id;
	std::string registration_source;
	std::string ref;
	std::string subid;
	int64_t     ts_creation;
	std::string network;
	std::string app_version;
	std::string app_version_registration;
	int64_t     device_type;
	bool        confirmed;
	int64_t     login_count;
	std::string locale;
	int64_t     premium_currency;
	std::string geo_country_code;
	std::string settings;
	int64_t     status;
	bool        trusted;
	int64_t     ts_tos_accepted;
	int64_t     ts_pp_accepted;

	struct glaze {
		using T                     = User;
		static constexpr auto value = glz::object(
			&T::id, &T::registration_source, &T::ref, &T::subid,
			&T::ts_creation, &T::network, &T::app_version,
			&T::app_version_registration, &T::device_type, &T::confirmed,
			&T::login_count, &T::locale, &T::premium_currency,
			&T::geo_country_code, &T::settings, &T::status, &T::trusted,
			&T::ts_tos_accepted, &T::ts_pp_accepted);
	};
};

struct Data {
	User                          user;
	Character                     character;
	std::string                   user_geo_location;
	bool                          has_marketing_email;
	Inventory                     inventory;
	BankInventory                 bank_inventory;
	Guild                         guild;
	std::vector<GuildMember>      guild_members;
	GuildCompetitionData          guild_competition_data;
	FinishedGuildBattleDefense    finished_guild_battle_defense;
	std::vector<GuildBattleGuild> guild_battle_guilds;
	std::vector<Quest>            quests;
	std::vector<DataItem>         items;
	std::vector<Training>         trainings;
	std::vector<nlohmann::json>   sidekicks;
	std::vector<Dungeon>          dungeons;
	std::vector<DungeonQuest>     dungeon_quests;
	std::vector<nlohmann::json>   campaigns;
	MabExperiments                mab_experiments;
	std::vector<nlohmann::json>   worldboss_event_character_data;
	EventQuest                    event_quest;
	DailyLoginBonusRewards        daily_login_bonus_rewards;
	int64_t                       daily_login_bonus_day;
	std::string                   ref;
	bool                          reskill_enabled;
	AdvertismentInfo              advertisment_info;
	bool                          show_advertisment;
	bool                          show_preroll_advertisment;
	int64_t                       tournament_end_timestamp;
	int64_t                       global_tournament_end_timestamp;
	int64_t                       league_season_end_timestamp;
	std::map<std::string, CurrentGoalValue>           current_goal_values;
	std::vector<std::map<std::string, CollectedGoal>> collected_goals;
	std::map<std::string, CurrentItemPatternValue>
								current_item_pattern_values;
	std::vector<nlohmann::json> collected_item_pattern;
	CurrentOpticalChanges       current_optical_changes;
	std::vector<nlohmann::json> collected_optical_changes;
	int64_t                     missed_duels;
	int64_t                     missed_league_fights;
	StreamsInfo                 streams_info;
	int64_t                     new_guild_log_entries;
	bool                        league_locked;
	std::vector<nlohmann::json> expired_guild_boosters;
	bool                        tos_update_needed;
	bool                        pp_update_needed;
	std::vector<std::string>    ad_provider_keys;
	std::map<std::string, LocalNotificationSetting>
								  local_notification_settings;
	Hideout                       hideout;
	std::vector<HideoutRoom>      hideout_rooms;
	int64_t                       missed_hideout_attacks;
	int64_t                       guild_gem_production_level;
	StoryDungeonLookup            story_dungeon_lookup;
	std::vector<StoryDungeonStep> story_dungeon_steps;
	std::vector<std::string>      completed_story_dungeon_steps;
	int64_t                       dungeon_hardmode_emblems;
	DailyBonusLookup              daily_bonus_lookup;
	std::vector<DailyBonusReward> daily_bonus_rewards;
	bool                          abo_bonus_claimed;
	int64_t                       abo_bonus_days_left;
	bool                          new_version;
	int64_t                       login_count;
	std::vector<nlohmann::json>   user_voucher_rewards;
	SeasonProgress                season_progress;
	std::vector<TitleElement>     titles;
	std::vector<News>             news;
	int64_t                       server_timestamp_offset;
	int64_t                       server_time;

	struct glaze {
		using T                     = Data;
		static constexpr auto value = glz::object(
			&T::user, &T::character, &T::user_geo_location,
			&T::has_marketing_email, &T::inventory, &T::bank_inventory,
			&T::guild, &T::guild_members);
	};
};

struct MyLoginData {
	Data        data;
	std::string error;
};
