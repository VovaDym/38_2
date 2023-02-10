#include <QtGui/QtGui>
#include <QApplication>

#include <QString>
#include <QWebEngineView>
#include <QPlainTextEdit>
#include <QHBoxLayout>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto *brWindow = new QWidget;
    auto *webView = new QWebEngineView;
    auto *plainTextEdit = new QPlainTextEdit;
    webView->setMinimumSize(500,800);
    plainTextEdit->setMinimumSize(600,800);
    plainTextEdit->setMaximumSize(950,1000);
    auto *hBox = new QHBoxLayout(brWindow);
    hBox->addWidget(plainTextEdit);
    hBox->addWidget(webView);


    auto text = "<h1>In the left window, enter the HTML code</h1>";
    webView->setHtml(text);


    QObject::connect(plainTextEdit,&QPlainTextEdit::textChanged, [webView,plainTextEdit]()
    {
        auto htmlText = plainTextEdit->toPlainText();
        webView->setHtml(htmlText);
    });
    brWindow->show();


    return a.exec();
}

#include <main.moc>
