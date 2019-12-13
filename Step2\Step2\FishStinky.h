/**
 * \file FishStinky.h
 *
 * \author Becky Henning
 *
 * Class the implements a Stinky fish
 */

#pragma once

#include <memory>

#include "Item.h"


 /**
  * Implements a Stinky fish
  */
class CFishStinky : public CItem
{
public:
	/// Constructor
	CFishStinky(CAquarium* aquarium);

	/// Default constructor (disabled)
	CFishStinky() = delete;

	/// Copy constructor (disabled)
	CFishStinky(const CFishStinky&) = delete;

	/// Draw stinky fish
	virtual void Draw(Gdiplus::Graphics* graphics) override;

	// Test if the fish has been clicked on
	bool HitTest(int x, int y);

	/// Set the item location
	/// \param x X location
	/// \param y Y location
	void SetLocation(double x, double y);

private:
	/// Pointer to image
	std::unique_ptr<Gdiplus::Bitmap> mFishImage;
};

