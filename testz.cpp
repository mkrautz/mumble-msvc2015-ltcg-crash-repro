#include <QtCore>
#include <QtGui>
#include <QtWidgets>

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);

	QAction *act = new QAction(NULL);
	act->setShortcuts(QKeySequence::WhatsThis);

	return 0;
}