/**
 * Permit.io API
 *  Authorization as a service 
 *
 * The version of the OpenAPI document: 2.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIResourceAttributesApi_H
#define OAI_OAIResourceAttributesApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIHTTPValidationError.h"
#include "OAIResourceAttributeCreate.h"
#include "OAIResourceAttributeRead.h"
#include "OAIResourceAttributeUpdate.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIResourceAttributesApi : public QObject {
    Q_OBJECT

public:
    OAIResourceAttributesApi(const int timeOut = 0);
    ~OAIResourceAttributesApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  resource_id QString [required]
    * @param[in]  oai_resource_attribute_create OAIResourceAttributeCreate [required]
    */
    void createResourceAttribute(const QString &proj_id, const QString &env_id, const QString &resource_id, const OAIResourceAttributeCreate &oai_resource_attribute_create);

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  resource_id QString [required]
    * @param[in]  attribute_id QString [required]
    * @param[in]  page qint32 [optional]
    * @param[in]  per_page qint32 [optional]
    */
    void deleteResourceAttribute(const QString &proj_id, const QString &env_id, const QString &resource_id, const QString &attribute_id, const ::OpenAPI::OptionalParam<qint32> &page = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &per_page = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  resource_id QString [required]
    * @param[in]  attribute_id QString [required]
    */
    void getResourceAttribute(const QString &proj_id, const QString &env_id, const QString &resource_id, const QString &attribute_id);

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  resource_id QString [required]
    * @param[in]  page qint32 [optional]
    * @param[in]  per_page qint32 [optional]
    */
    void listResourceAttributes(const QString &proj_id, const QString &env_id, const QString &resource_id, const ::OpenAPI::OptionalParam<qint32> &page = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &per_page = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  resource_id QString [required]
    * @param[in]  attribute_id QString [required]
    * @param[in]  oai_resource_attribute_update OAIResourceAttributeUpdate [required]
    */
    void updateResourceAttribute(const QString &proj_id, const QString &env_id, const QString &resource_id, const QString &attribute_id, const OAIResourceAttributeUpdate &oai_resource_attribute_update);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void createResourceAttributeCallback(OAIHttpRequestWorker *worker);
    void deleteResourceAttributeCallback(OAIHttpRequestWorker *worker);
    void getResourceAttributeCallback(OAIHttpRequestWorker *worker);
    void listResourceAttributesCallback(OAIHttpRequestWorker *worker);
    void updateResourceAttributeCallback(OAIHttpRequestWorker *worker);

signals:

    void createResourceAttributeSignal(OAIResourceAttributeRead summary);
    void deleteResourceAttributeSignal();
    void getResourceAttributeSignal(OAIResourceAttributeRead summary);
    void listResourceAttributesSignal(QList<OAIResourceAttributeRead> summary);
    void updateResourceAttributeSignal(OAIResourceAttributeRead summary);

    void createResourceAttributeSignalFull(OAIHttpRequestWorker *worker, OAIResourceAttributeRead summary);
    void deleteResourceAttributeSignalFull(OAIHttpRequestWorker *worker);
    void getResourceAttributeSignalFull(OAIHttpRequestWorker *worker, OAIResourceAttributeRead summary);
    void listResourceAttributesSignalFull(OAIHttpRequestWorker *worker, QList<OAIResourceAttributeRead> summary);
    void updateResourceAttributeSignalFull(OAIHttpRequestWorker *worker, OAIResourceAttributeRead summary);

    void createResourceAttributeSignalE(OAIResourceAttributeRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteResourceAttributeSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getResourceAttributeSignalE(OAIResourceAttributeRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listResourceAttributesSignalE(QList<OAIResourceAttributeRead> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateResourceAttributeSignalE(OAIResourceAttributeRead summary, QNetworkReply::NetworkError error_type, QString error_str);

    void createResourceAttributeSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteResourceAttributeSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getResourceAttributeSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listResourceAttributesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateResourceAttributeSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
