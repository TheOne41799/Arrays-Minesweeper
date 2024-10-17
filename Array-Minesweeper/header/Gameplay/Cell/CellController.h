#pragma once
#include <sfml/Graphics.hpp>

namespace Gameplay
{
    namespace Cell
    {
        class CellView;
        class CellModel;
        enum class CellState;
        enum class CellValue;

        class CellController
        {
        private:
            CellModel* cell_model;
            CellView* cell_view;

            void destroy();

        public:
            //CellController();
            //CellController(int cell_index);
            CellController(sf::Vector2i grid_position);
            ~CellController();

            void initialize(float cell_width, float cell_height);
            void update();
            void render();

            CellState getCellState();
            CellValue getCellValue();
            sf::Vector2i getCellPosition();

            void reset();
        };
    }
}