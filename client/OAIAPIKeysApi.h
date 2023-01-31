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

#ifndef OAI_OAIAPIKeysApi_H
#define OAI_OAIAPIKeysApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIAPIKeyCreate.h"
#include "OAIAPIKeyRead.h"
#include "OAIAPIKeyScopeRead.h"
#include "OAIHTTPValidationError.h"
#include "OAIPaginatedResult_APIKeyRead_.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIAPIKeysApi : public QObject {
    Q_OBJECT

public:
    OAIAPIKeysApi(const int timeOut = 0);
    ~OAIAPIKeysApi();

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
    * @param[in]  oaiapi_key_create OAIAPIKeyCreate [required]
    */
    void createApiKey(const OAIAPIKeyCreate &oaiapi_key_create);

    /**
    * @param[in]  api_key_id QString [required]
    */
    void deleteApiKey(const QString &api_key_id);

    /**
    * @param[in]  api_key_id QString [required]
    */
    void getApiKey(const QString &api_key_id);


    void getApiKeyScope();

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    */
    void getEnvironmentApiKey(const QString &proj_id, const QString &env_id);

    /**
    * @param[in]  page qint32 [optional]
    * @param[in]  per_page qint32 [optional]
    */
    void listApiKeys(const ::OpenAPI::OptionalParam<qint32> &page = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &per_page = ::OpenAPI::OptionalParam<qint32>());


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

    void createApiKeyCallback(OAIHttpRequestWorker *worker);
    void deleteApiKeyCallback(OAIHttpRequestWorker *worker);
    void getApiKeyCallback(OAIHttpRequestWorker *worker);
    void getApiKeyScopeCallback(OAIHttpRequestWorker *worker);
    void getEnvironmentApiKeyCallback(OAIHttpRequestWorker *worker);
    void listApiKeysCallback(OAIHttpRequestWorker *worker);

signals:

    void createApiKeySignal(OAIAPIKeyRead summary);
    void deleteApiKeySignal();
    void getApiKeySignal(OAIAPIKeyRead summary);
    void getApiKeyScopeSignal(OAIAPIKeyScopeRead summary);
    void getEnvironmentApiKeySignal(OAIAPIKeyRead summary);
    void listApiKeysSignal(OAIPaginatedResult_APIKeyRead_ summary);

    void createApiKeySignalFull(OAIHttpRequestWorker *worker, OAIAPIKeyRead summary);
    void deleteApiKeySignalFull(OAIHttpRequestWorker *worker);
    void getApiKeySignalFull(OAIHttpRequestWorker *worker, OAIAPIKeyRead summary);
    void getApiKeyScopeSignalFull(OAIHttpRequestWorker *worker, OAIAPIKeyScopeRead summary);
    void getEnvironmentApiKeySignalFull(OAIHttpRequestWorker *worker, OAIAPIKeyRead summary);
    void listApiKeysSignalFull(OAIHttpRequestWorker *worker, OAIPaginatedResult_APIKeyRead_ summary);

    void createApiKeySignalE(OAIAPIKeyRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteApiKeySignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getApiKeySignalE(OAIAPIKeyRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getApiKeyScopeSignalE(OAIAPIKeyScopeRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getEnvironmentApiKeySignalE(OAIAPIKeyRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listApiKeysSignalE(OAIPaginatedResult_APIKeyRead_ summary, QNetworkReply::NetworkError error_type, QString error_str);

    void createApiKeySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteApiKeySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getApiKeySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getApiKeyScopeSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getEnvironmentApiKeySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listApiKeysSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
