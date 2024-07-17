#include "glaze/core/meta.hpp"
#include "models/login_data.hpp"

template <> struct glz::meta<User> {
	static constexpr auto value = object(
		"id", &User::id, "registration_source", &User::registration_source,
		"ref", &User::ref, "subid", &User::subid, "ts_creation",
		&User::ts_creation, "network", &User::network, "app_version",
		&User::app_version, "app_version_registration",
		&User::app_version_registration, "device_type", &User::device_type,
		"confirmed", &User::confirmed, "login_count", &User::login_count,
		"locale", &User::locale, "premium_currency",
		&User::premium_currency, "geo_country_code",
		&User::geo_country_code, "settings", &User::settings, "status",
		&User::status, "trusted", &User::trusted, "ts_tos_accepted",
		&User::ts_tos_accepted, "ts_pp_accepted", &User::ts_pp_accepted);
};

template <> struct glz::meta<Character> {
	static constexpr auto value = object(
		"id", &Character::id, "user_id", &Character::user_id, "name",
		&Character::name, "locale", &Character::locale, "gender",
		&Character::gender, "title", &Character::title, "game_currency",
		&Character::game_currency, "xp", &Character::xp, "level",
		&Character::level, "description", &Character::description, "note",
		&Character::note, "ts_last_action", &Character::ts_last_action,
		"online_status", &Character::online_status, "score_honor",
		&Character::score_honor, "score_level", &Character::score_level,
		"stat_points_available", &Character::stat_points_available,
		"stat_base_stamina", &Character::stat_base_stamina,
		"stat_base_strength", &Character::stat_base_strength,
		"stat_base_critical_rating", &Character::stat_base_critical_rating,
		"stat_base_dodge_rating", &Character::stat_base_dodge_rating,
		"stat_total_stamina", &Character::stat_total_stamina,
		"stat_total_strength", &Character::stat_total_strength,
		"stat_total_critical_rating",
		&Character::stat_total_critical_rating, "stat_total_dodge_rating",
		&Character::stat_total_dodge_rating, "stat_weapon_damage",
		&Character::stat_weapon_damage, "stat_total",
		&Character::stat_total, "stat_bought_stamina",
		&Character::stat_bought_stamina, "stat_bought_strength",
		&Character::stat_bought_strength, "stat_bought_critical_rating",
		&Character::stat_bought_critical_rating,
		"stat_bought_dodge_rating", &Character::stat_bought_dodge_rating,
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
		"active_league_booster_id", &Character::active_league_booster_id,
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
		&Character::quest_pool, "honor", &Character::honor, "ts_last_duel",
		&Character::ts_last_duel, "active_duel_id",
		&Character::active_duel_id, "duel_stamina",
		&Character::duel_stamina, "max_duel_stamina",
		&Character::max_duel_stamina, "ts_last_duel_stamina_change",
		&Character::ts_last_duel_stamina_change, "duel_stamina_cost",
		&Character::duel_stamina_cost, "ts_last_duel_enemies_refresh",
		&Character::ts_last_duel_enemies_refresh, "current_work_offer_id",
		&Character::current_work_offer_id, "active_work_id",
		&Character::active_work_id, "active_training_id",
		&Character::active_training_id, "training_pool",
		&Character::training_pool, "ts_last_training_finished",
		&Character::ts_last_training_finished, "ts_last_training_refresh",
		&Character::ts_last_training_refresh, "training_energy",
		&Character::training_energy, "max_training_energy",
		&Character::max_training_energy, "ts_last_training_energy_change",
		&Character::ts_last_training_energy_change, "stat_trained_stamina",
		&Character::stat_trained_stamina, "stat_trained_strength",
		&Character::stat_trained_strength, "stat_trained_critical_rating",
		&Character::stat_trained_critical_rating,
		"stat_trained_dodge_rating", &Character::stat_trained_dodge_rating,
		"training_count", &Character::training_count, "max_training_count",
		&Character::max_training_count, "active_worldboss_attack_id",
		&Character::active_worldboss_attack_id, "active_dungeon_quest_id",
		&Character::active_dungeon_quest_id, "ts_last_dungeon_quest_fail",
		&Character::ts_last_dungeon_quest_fail, "max_dungeon_index",
		&Character::max_dungeon_index, "appearance_skin_color",
		&Character::appearance_skin_color, "appearance_hair_color",
		&Character::appearance_hair_color, "appearance_hair_type",
		&Character::appearance_hair_type, "appearance_head_type",
		&Character::appearance_head_type, "appearance_eyes_type",
		&Character::appearance_eyes_type, "appearance_eyebrows_type",
		&Character::appearance_eyebrows_type, "appearance_nose_type",
		&Character::appearance_nose_type, "appearance_mouth_type",
		&Character::appearance_mouth_type, "appearance_facial_hair_type",
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
		&Character::unread_mass_system_messages, "friend_messages_only",
		&Character::friend_messages_only, "worldboss_event_id",
		&Character::worldboss_event_id, "worldboss_event_attack_count",
		&Character::worldboss_event_attack_count, "ts_last_wash_item",
		&Character::ts_last_wash_item, "ts_last_daily_login_bonus",
		&Character::ts_last_daily_login_bonus, "daily_login_bonus_day",
		&Character::daily_login_bonus_day, "pending_tournament_rewards",
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
		&Character::league_opponents, "ts_last_league_opponents_refresh",
		&Character::ts_last_league_opponents_refresh, "league_stamina",
		&Character::league_stamina, "max_league_stamina",
		&Character::max_league_stamina, "ts_last_league_stamina_change",
		&Character::ts_last_league_stamina_change, "league_stamina_cost",
		&Character::league_stamina_cost,
		"pending_league_tournament_rewards",
		&Character::pending_league_tournament_rewards,
		"herobook_objectives_renewed_today",
		&Character::herobook_objectives_renewed_today,
		"current_slotmachine_spin", &Character::current_slotmachine_spin,
		"slotmachine_spin_count", &Character::slotmachine_spin_count,
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

template <> struct glz::meta<Data> {
	static constexpr auto value
		= object("user", &Data::user, "character", &Data::character,
				 "user_geo_location", &Data::user_geo_location,
				 "has_marketing_email", &Data::has_marketing_email,
				 "inventory", &Data::inventory);
};

template <> struct glz::meta<MyLoginData> {
	static constexpr auto value
		= object("data", &MyLoginData::data, "error", &MyLoginData::error);
};
