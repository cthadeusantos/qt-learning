/*
    qDeleteall
    Note the STL functions startiing with Qt 5
    https://doc.qt.io/archives/qt-5.9/qtalgorithms.html#qDeleteAll
 */
#include <QCoreApplication>

#include "test.h"

// Get a list of pointers
typedef QList<Test*> testList;

testList getList()
{
    testList list;
    for (int i =0; i < 5; i++){
        list.append(new Test());
        list.last()->setObjectName("Test " + QString::number(i));
    }
    return list;
}

// Display a list if pointers
void display(testList list)
{
    foreach (Test* item, list)
    {
        qInfo() << item;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //In action...

    testList list = getList();
    display(list);

    qInfo() << "Deleting...";
    //qDeleteAll(list);  // The entire list
    qDeleteAll(list.begin(), list.end());
    list.clear();

    display(list);

    return a.exec();
}
