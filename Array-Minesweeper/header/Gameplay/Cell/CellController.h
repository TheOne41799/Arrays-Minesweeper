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
            CellController();
            ~CellController();

            void initialize();
            void update();
            void render();

            CellState getCellState();
            CellValue getCellValue();

            void reset();
        };
    }
}