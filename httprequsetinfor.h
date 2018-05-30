#ifndef HTTPREQUESTINFOR_H
#define HTTPREQUESTINFOR_H

#include "httprequestinfor_global.h"
#include  "httprequest.h"
class HTTPREQUESTINFORSHARED_EXPORT HttpRequsetInfor
{

public:
    HttpRequsetInfor();
    virtual ~HttpRequsetInfor();

    QMap<QString , QVariant> requestInfor( QMap<QString , QString> keys , QString urls);

    QMap<QString , QVariant> requestListInfor( QMap<QString , QVariant> keys , QString urls);


    QMap<QString , QVariant> requestInforRetList( QMap<QString , QString> keys , QString urls);

    QMap<QString , QVariant> requestListInforRetList( QMap<QString , QVariant> keys , QString urls);


    QMap<QString , QVariant> requestListInforRetList( QList<QVariant> keysb , QString urls);


    HttpRequest * m_httpRequest;
};

#endif // HTTPREQUESTINFOR_H
