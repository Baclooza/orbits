#pragma once

#include <bn_fixed_point.h>
#include <bn_sprite_ptr.h>

class Center;

class Orbiter {
    public:
        /**
         * Creates an orbiter.
         */
        Orbiter(bn::fixed_point starting_location, bn::fixed_point starting_velocity, Center &center);

        /**
         * Take a step orbiting around the center.
         */
        void update();

    private:
        bn::sprite_ptr _sprite;
        bn::fixed_point _velocity;
        Center& _center;
};
