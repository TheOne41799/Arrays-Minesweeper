#include "../../header/Gameplay/Cell/CellController.h"
#include "../../header/Gameplay/Cell/CellModel.h"
#include "../../header/Gameplay/Cell/CellView.h"
#include "../../header/Sound/SoundService.h"
#include "../../header/Global/ServiceLocator.h"

namespace Gameplay
{
	namespace Cell
	{

		/*CellController::CellController()
		{
			cell_model = new CellModel();
			cell_view = new CellView(this);
		}*/

		/*CellController::CellController(int cell_index)
		{
			cell_model = new CellModel(cell_index);
			cell_view = new CellView(this);
		}*/

		CellController::CellController(sf::Vector2i grid_position)
		{
			cell_model = new CellModel(grid_position);
			cell_view = new CellView(this);
		}

		CellController::~CellController()
		{
			destroy();
		}

		void CellController::initialize(float cell_width, float cell_height)
		{
			cell_view->initialize(cell_width, cell_height);
		}

		CellState CellController::getCellState()
		{
			return cell_model->getCellState();
		}

		CellValue CellController::getCellValue()
		{
			return cell_model->getCellValue();
		}

		void CellController::reset()
		{
			cell_model->reset();
		}

		void CellController::update()
		{
			cell_view->update();
		}

		void CellController::render()
		{
			cell_view->render();
		}

		void CellController::destroy()
		{
			delete (cell_view);
			delete (cell_model);
		}

		sf::Vector2i CellController::getCellPosition()
		{
			return cell_model->getCellPosition();
		}
	}
}