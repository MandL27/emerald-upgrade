#ifndef GUARD_CONSTANTS_BATTLE_CONFIG_H
#define GUARD_CONSTANTS_BATTLE_CONFIG_H

#define GEN_3 0
#define GEN_4 1
#define GEN_5 2
#define GEN_6 3
#define GEN_7 4
#define GEN_8 5

// Calculation settings
#define B_CRIT_CHANCE               GEN_6 // Chances of a critical hit landing. See CalcCritChanceStage.
#define B_CRIT_MULTIPLIER           GEN_6 // In Gen6+, critical hits multiply damage by 1.5 instead of 2.
#define B_EXP_CATCH                 GEN_6 // In Gen6+, Pokémon get experience from catching.
#define B_SPLIT_EXP                 GEN_6 // In Gen6+, Pokémon no longer split experience if multiple are used in the same battle.
#define B_SCALED_EXP                GEN_7 // In Gen5 and Gen7+, exp scales by level of pokemon defeated.
#define B_TRAINER_EXP_MULTIPLIER    GEN_7 // In Gen7+, trainer battles no longer give a 1.5 multiplier to exp gain.
#define B_BURN_DAMAGE               GEN_7 // In Gen7+, burn damage is 1/16th of max HP instead of 1/8th.
#define B_PARALYSIS_SPEED           GEN_7 // In Gen7+, speed is decreased by 50% instead of 75%.
#define B_TERRAIN_TYPE_BOOST        GEN_6 // In Gen8+, damage is boosted by 30% instead of 50%.
#define B_BINDING_DAMAGE            GEN_6 // In Gen6+, binding damage is 1/8 of max HP instead of 1/16. (With Binding Band, 1/6 and 1/8 respectively.)
#define B_CONFUSION_SELF_DMG_CHANCE GEN_7 // In Gen7+, confusion has a 33.3% of self-damage, instead of 50%.

// Move settings
#define B_FELL_STINGER_STAT_RAISE   GEN_7 // In Gen7+, it raises Atk by 3 stages instead of 2 if it causes the target to faint.
#define B_SOUND_SUBSTITUTE          GEN_6 // In Gen6+, sound moves bypass Substitute.
#define B_TOXIC_NEVER_MISS          GEN_6 // In Gen6+, if Toxic is used by a Poison type, it will never miss.
#define B_PAYBACK_SWITCH_BOOST      GEN_6 // In Gen5+, if the opponent switches out, Payback's damage will no longer be doubled.
#define B_KINGS_SHIELD_LOWER_ATK    GEN_7 // In Gen7+, it lowers Atk by 1 stage instead of 2 of oponents that hit it.
#define B_BINDING_TURNS             GEN_6 // In Gen5+, binding moves last for 4-5 turns instead of 2-5 turns. (With Grip Claw, 7 and 5 turns respectively.)
#define B_INCINERATE_GEMS           GEN_6 // In Gen6+, Incinerate can destroy Gems.

// Ability settings
#define B_ABILITY_POP_UP            GEN_6 // In Gen5+, the Pokémon abilities are displayed in a pop-up, when they activate in battle.
#define B_ABILITY_WEATHER           GEN_6 // In Gen5+, weather caused by abilities lasts the same amount of turns as induced from a move. Before, they lasted till the battle's end or weather change by a move.
#define B_GALE_WINGS                GEN_7 // In Gen7+ requires full HP to trigger.
#define B_STANCE_CHANGE_FAIL        GEN_7 // In Gen7+, Aegislash's form change does not happen, if the Pokémon cannot use a move, because of confusion, paralysis, etc. In gen6, the form change occurs despite not being able to move.
#define B_GHOSTS_ESCAPE             GEN_6 // In Gen6+, ghosts can escape even when blocked by abilities such as Shadow Tag.
#define B_MOODY_ACC_EVASION         GEN_8 // In Gen8+, Moody CANNOT raise Accuray and Evasion any more.
#define B_FLASH_FIRE_FROZEN         GEN_6 // In Gen5+, Flash Fire can trigger even when frozen, when it couldn't before.
#define B_SYNCHRONIZE_NATURE        GEN_8 // In Gen8+, if the Pokémon with Synchronize is leading the party, it's 100% guaranteed that wild Pokémon will have the same ability, as opposed to 50% previously.

// Other
#define B_FAST_INTRO                TRUE  // If set to TRUE, battle intro texts print at the same time as animation of a Pokémon, as opposing to waiting for the animation to end.
#define B_SLEEP_TURNS               GEN_6 // In Gen5+, sleep lasts for 1-3 turns instead of 2-5 turns.

// Animation Settings
#define NEW_SWORD_PARTICLE          // update swords dance particle
#define NEW_LEECH_SEED_PARTICLE     //update leech seed's animation particle
#define NEW_HORN_ATTACK_PARTICLE    //update horn attack's horn
#define NEW_LEAF_PARTICLE           // update leaf particle
#define NEW_EMBER_PARTICLES         //updates ember fire particle
#define NEW_MEAN_LOOK_PARTICLE      //update mean look eye
#define NEW_TEETH_PARTICLE          //update bite/crunch teeth particle
#define NEW_HANDS_FEET_PARTICLE     //update chop/kick/punch particles
#define NEW_SPIKES_PARTICLE         //update spikes particle
#define NEW_FLY_BUBBLE_PARTICLE     //update fly 'bubble' particle
#define NEW_CURSE_NAIL_PARTICLE     //updates curse nail
#define NEW_BATON_PASS_BALL_PARTICLE    //update baton pass pokeball sprite
#define NEW_MORNING_SUN_STAR_PARTICLE   //updates morning sun star particles
#define NEW_IMPACT_PALETTE          //updates the basic 'hit' particle
#define NEW_SURF_PARTICLE_PALETTE   //updates the surf wave palette

#endif // GUARD_CONSTANTS_BATTLE_CONFIG_H