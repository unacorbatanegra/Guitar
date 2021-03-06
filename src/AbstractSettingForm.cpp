#include "AbstractSettingForm.h"

AbstractSettingForm::AbstractSettingForm(QWidget *parent)
	: QWidget(parent)
{
}

MainWindow *AbstractSettingForm::mainwindow()
{
	auto *w = qobject_cast<SettingsDialog *>(window());
	Q_ASSERT(w);
	return w->mainwindow();
}

ApplicationSettings *AbstractSettingForm::settings()
{
	auto *w = qobject_cast<SettingsDialog *>(window());
	Q_ASSERT(w);
	return &w->set;
}
