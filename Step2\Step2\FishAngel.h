/**
 * \file FishAngel.h
 *
 * \author Becky Henning
 *
 * Class the implements an Angel fish
 */

#pragma once

#include <memory>

#include "Item.h"


 /**
  * Implements an Angel fish
  */
class CFishAngel : public CItem
{
public:
	/// Constructor
	CFishAngel(CAquarium* aquarium);

	/// Default constructor (disabled)
	CFishAngel() = delete;

	/// Copy constructor (disabled)
	CFishAngel(const CFishAngel&) = delete;

	/// Draw Angel Fish
	virtual void Draw(Gdiplus::Graphics* graphics) override;

	// Test if the fish has been clicked on
	bool HitTest(int x, int y);

private:
	/// Pointer to image
	std::unique_ptr<Gdiplus::Bitmap> mFishImage;
};

