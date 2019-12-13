/**
 * \file Aquarium.h
 *
 * \author Becky Henning
 *
 * Class that represents the aquarium. 
 *
 * Describes all objects within the aquarium.
 */


#pragma once

#include <memory>
#include <vector>

using namespace std;

class CItem;

/**
 * Represents an aquarium
 */
class CAquarium
{
public:
	// Constructor
	CAquarium();

	// Draw item in aquarium
	void OnDraw(Gdiplus::Graphics* graphics);

	// Add item to aquarium
	void Add(shared_ptr<CItem> item);

	// Delete item from aquarium
	void Delete(shared_ptr<CItem> item);

	// Test if item in aquarium was clicked on
	shared_ptr<CItem> HitTest(int x, int y);

	// Move items if they are in the way of Stinky Fish
	void MoveItems(double x, double y);

private:
	/// Background image
	unique_ptr<Gdiplus::Bitmap> mBackground;

	/// All of the items to populate our aquarium
	vector<shared_ptr<CItem> > mItems;
};

