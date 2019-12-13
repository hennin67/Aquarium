
/**
 * \file ChildView.h
 *
 * \author Becky Henning
 *
 * Class that implements the child window our program draws in.
 *
 * The window is a child of the main frame, which holds this
 * window, the menu bar, and the status bar.
 */


#pragma once

#include "Aquarium.h"

 /**
  * The child window our program draws in.
  */
class CChildView : public CWnd
{
// Construction
public:
	CChildView();

// Attributes
public:
	/// Any item we are currently dragging
	std::shared_ptr<CItem> mGrabbedItem;

// Operations
public:

// Overrides
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CChildView();

	// Generated message map functions
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()

private:
	/// An object that describes our aquarium
	CAquarium  mAquarium;
public:
	afx_msg void OnAddfishBetafish();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnAddfishAngelfish();
	afx_msg void OnAddfishBubblesfish();
	afx_msg void OnAddfishStinkyfish();
};

