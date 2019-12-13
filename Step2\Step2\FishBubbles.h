/**
 * \file FishBubbles.h
 *
 * \author Becky Henning
 *
 * Class the implements a Bubbles fish
 */

#pragma once

#include <memory>

#include "Item.h"


 /**
  * Implements a Bubbles fish
  */
class CFishBubbles : public CItem
{
public:
	/// Constructor
	CFishBubbles(CAquarium* aquarium);

	/// Default constructor (disabled)
	CFishBubbles() = delete;

	/// Copy constructor (disabled)
	CFishBubbles(const CFishBubbles&) = delete;

	/// Draw bubbles fish
	virtual void Draw(Gdiplus::Graphics* graphics) override;

	// Test if the fish has been clicked on
	bool HitTest(int x, int y);

private:
	/// Pointer to image
	std::unique_ptr<Gdiplus::Bitmap> mFishImage;
};

