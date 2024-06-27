#include <QApplication>
#include <QLabel>
#include <QWidget>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	QLabel hello("<center>Meu primeiro programa com QT e C++</center>");
	hello.setWindowTitle("Título da janela do meu programa.");
	hello.resize(400,400);
	hello.show();
	return app.exec();
}

