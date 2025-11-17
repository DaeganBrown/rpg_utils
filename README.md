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
- 0.0.4: Simulation object, to run the active entities. 
- 0.1.0: NewtonianPhysics Implemented, testbench created, allowing for updating movements. 

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