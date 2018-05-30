#ifndef HTTPREQUEST_H
#define HTTPREQUEST_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QCryptographicHash>
#include <QSettings>
#include <QStringList>
#include <QCoreApplication>
#include <QJsonArray>
#include <QNetworkReply>
#include <QUrl>
#include <QByteArray>
#include <QDebug>
#include <QNetworkRequest>
#include  <QTime>
#include  <QMap>


class HttpRequest : public QObject
{
    Q_OBJECT
public:
    explicit HttpRequest(QObject *parent = 0);
    virtual ~HttpRequest();

    QMap<QString , QVariant> requestInfor( QMap<QString , QString> keys , QString urls);

    QMap<QString , QVariant> requestListInfor( QMap<QString , QVariant> keys , QString urls);


    QMap<QString , QVariant> requestInforRetList( QMap<QString , QString> keys , QString urls);

    QMap<QString , QVariant> requestListInforRetList( QMap<QString , QVariant> keys , QString urls);


    QMap<QString , QVariant> requestListInforRetList( QList<QVariant> keysb , QString urls);





};

#endif // HTTPREQUEST_H
