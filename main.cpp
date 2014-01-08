#include <QtGui/QApplication>
#include <QtDeclarative/QDeclarativeContext>
#include "qmlapplicationviewer.h"

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QString myButtonText = "C++ button";
    QString myLabelText = "Hello, QML world!";

    QScopedPointer<QApplication> app(createApplication(argc, argv));

    QmlApplicationViewer viewer;
    viewer.rootContext()->setContextProperty("myButton",myButtonText);
    viewer.rootContext()->setContextProperty("myLabel",myLabelText);

    viewer.setOrientation(QmlApplicationViewer::ScreenOrientationAuto);
    viewer.setMainQmlFile(QLatin1String("qml/ContextProperty4/main.qml"));
    viewer.showExpanded();

    return app->exec();
}
