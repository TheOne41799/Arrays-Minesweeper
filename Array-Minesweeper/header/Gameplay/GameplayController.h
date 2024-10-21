#pragma once


namespace Gameplay
{
    class GameplayController
    {
    private:
        const float max_level_duration = 301.0f;

        float remaining_time;

        void updateRemainingTime();

    public:
        GameplayController();
        ~GameplayController();

        void initialize();
        void update();
        void render();

        void restart();

        float getRemainingTime();
    };
}