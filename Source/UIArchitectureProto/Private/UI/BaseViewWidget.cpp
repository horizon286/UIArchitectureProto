// Created by Daniel Janák


#include "UI/BaseViewWidget.h"
#include "UI/BasePresenter.h"

const bool UBaseViewWidget::GetDisposableOnClose()
{
	return bDisposableOnClose;
}

const EViewType UBaseViewWidget::GetViewType()
{
	return ViewType;
}
