/**
 * \file FishBeta.h
 *
 * \author Becky Henning
 *
 * Class the implements a Beta fish
 */

#pragma once

#include <memory>

#include "Item.h"


 /**
  * Implements a Beta fish
  */
class CFishBeta : public CItem
{
public:
	/// Constructor
	CFishBeta(CAquarium* aquarium);

	/// Default constructor (disabled)
	CFishBeta() = delete;

	/// Copy constructor (disabled)
	CFishBeta(const CFishBeta&) = delete;

	/// Draw Beta Fish
	virtual void Draw(Gdiplus::Graphics* graphics) override;

	// Test if the fish has been clicked on
	bool HitTest(int x, int y);

private:
	/// Pointer to image
	std::unique_ptr<Gdiplus::Bitmap> mFishImage;
};

