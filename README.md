# So it begins

This is a long term project idea pulled from being tired of wasted potential of games like Fallout 4. This is intended to be a back end framework for RPGS, with frameworks for stat tracking, leveling, locations, spawns, NPCs, factions, reputation systems, and the impression of a living world(ie, it changes without player input).

I chose C++ because I love C++. Fight me. 

# How to Use

# Debugging

# Roadmap

## Version Roadmap

- 0.0.1: Created
- 0.0.2: Position, Rotation, LinearVelocity, AngularVelocity, LinearAcceleration, and AngularAcceleration implemented.
- 0.0.3: Entity type, as basis for physics objects, 
- 0.0.4: OnTick method to update Position, Rotation, Velocity, and Acceleration
- 0.0.5: Simulation object, to run the active entities. 
- 0.1.0: NewtonianPhysics Implemented, testbench created, allowing for updating movements. 
- 0.1.1: Implementing Simple Shapes for entities
- 0.1.2: Collision Detection
- 0.1.3: Bouncing, damping, collisions
- 0.1.4: Sliding and friction 
- 0.2.0: Entity shapes, collisions, and testbenches for speed of calculating collisions. 
- 0.2.1: Entity Joining 
- 0.2.2: Sub-Entities w/ physics joining, freeziing, or scaling
- 0.2.3: Mass, inertia, and gravitational acceleration. 
- 0.3.0: Complex object simulating, acceleration due to gravity, testbenches for joined objects to check simulated fps. 
- 0.3.1: Character object (Entity with stats)
- 0.3.2: Core stats (Health, Armor, Stamina, "mana")
- 0.3.3: Character trait system
- 0.3.4: Armor Types, damage types, resistances, etc
- 0.3.5: Ability Scores (STR, DEX, CON, INT, WIS, CHR, LCK)
- 0.3.6: Experience points, leveling scale, Simulation Level
- 0.4.0: RPG Level System (For Characters) with stress testing of max levels, min levels, edge case adding levels, and stats
- 0.4.1: Monster Object (Non Standard Entity with stats)
- 0.4.2: Core Stats and Traits
- 0.4.3: Leveling rules
- 0.5.0: RPG Monster System with the same durability as character system
- 0.6.0: Basic UI Engine
- 0.7.0: Basic Render Engine
- 0.8.0: Basic Lighting Engine
- 1.0.0: Functioning 3D engine for an rpg, including:
    - Basic Physics Engine
    - Basic Rendering Engine
    - Basic Lighting Engine
    - Basic UI Engine
    - RPG Level System
    - Monster leveling and ability System
    - NPC Dialogue system
    - Faction Relations
    - Faction Background Progress
    - Calendar System
    - Gear and Items


## Needed Items

- [ ] Three/Two Dimensional Space
    - [ ] Entities
        - [ ] Leveling System
        - [ ] Characters
            - [ ] Player Characters
            - [ ] Non Player Characters
            - [ ] Stat System
            - [ ] Limit System
            - [ ] Perks and traits
        - [ ] Monsters
            - [ ] Perks and traits
        - [ ] Non motile entities
            - [ ] Item references
    - [ ] World 
        - [ ] Maps
            - [ ] LOD 
            - [ ] Render Distance or chunk based? 
        - [ ] Sub Spaces
        - [ ] Regions
            - [ ] Regional Danger
            - [ ] Regional tables
                - [ ] Loot
                - [ ] Spawns
                - [ ] Wealth
- [ ] Factions
    - [ ] Territory
    - [ ] Preferences
    - [ ] Politics
        - [ ] Enemies
        - [ ] Tense
        - [ ] Neutral
        - [ ] Friendly
        - [ ] Allies
    - [ ] Resources
        - [ ] Degradation of forces
        - [ ] Wealth of settlements
    - [ ] Settlements
    - [ ] Outposts
    - [ ] Forts
- [ ] Items
    - [ ] Weapons
    - [ ] Apparel
    - [ ] Trinkets
    - [ ] Junk
    - [ ] Collectibles
    - [ ] Currency