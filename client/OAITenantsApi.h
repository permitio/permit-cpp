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

#ifndef OAI_OAITenantsApi_H
#define OAI_OAITenantsApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIHTTPValidationError.h"
#include "OAIPaginatedResult_UserRead_.h"
#include "OAITenantCreate.h"
#include "OAITenantRead.h"
#include "OAITenantUpdate.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAITenantsApi : public QObject {
    Q_OBJECT

public:
    OAITenantsApi(const int timeOut = 0);
    ~OAITenantsApi();

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
    * @param[in]  oai_tenant_create OAITenantCreate [required]
    */
    void createTenant(const QString &proj_id, const QString &env_id, const OAITenantCreate &oai_tenant_create);

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  tenant_id QString [required]
    */
    void deleteTenant(const QString &proj_id, const QString &env_id, const QString &tenant_id);

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  tenant_id QString [required]
    * @param[in]  user_id QString [required]
    */
    void deleteTenantUser(const QString &proj_id, const QString &env_id, const QString &tenant_id, const QString &user_id);

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  tenant_id QString [required]
    */
    void getTenant(const QString &proj_id, const QString &env_id, const QString &tenant_id);

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  tenant_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  search QString [optional]
    * @param[in]  page qint32 [optional]
    * @param[in]  per_page qint32 [optional]
    */
    void listTenantUsers(const QString &proj_id, const QString &tenant_id, const QString &env_id, const ::OpenAPI::OptionalParam<QString> &search = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &per_page = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  search QString [optional]
    * @param[in]  page qint32 [optional]
    * @param[in]  per_page qint32 [optional]
    */
    void listTenants(const QString &proj_id, const QString &env_id, const ::OpenAPI::OptionalParam<QString> &search = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &per_page = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  proj_id QString [required]
    * @param[in]  env_id QString [required]
    * @param[in]  tenant_id QString [required]
    * @param[in]  oai_tenant_update OAITenantUpdate [required]
    */
    void updateTenant(const QString &proj_id, const QString &env_id, const QString &tenant_id, const OAITenantUpdate &oai_tenant_update);


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

    void createTenantCallback(OAIHttpRequestWorker *worker);
    void deleteTenantCallback(OAIHttpRequestWorker *worker);
    void deleteTenantUserCallback(OAIHttpRequestWorker *worker);
    void getTenantCallback(OAIHttpRequestWorker *worker);
    void listTenantUsersCallback(OAIHttpRequestWorker *worker);
    void listTenantsCallback(OAIHttpRequestWorker *worker);
    void updateTenantCallback(OAIHttpRequestWorker *worker);

signals:

    void createTenantSignal(OAITenantRead summary);
    void deleteTenantSignal();
    void deleteTenantUserSignal();
    void getTenantSignal(OAITenantRead summary);
    void listTenantUsersSignal(OAIPaginatedResult_UserRead_ summary);
    void listTenantsSignal(QList<OAITenantRead> summary);
    void updateTenantSignal(OAITenantRead summary);

    void createTenantSignalFull(OAIHttpRequestWorker *worker, OAITenantRead summary);
    void deleteTenantSignalFull(OAIHttpRequestWorker *worker);
    void deleteTenantUserSignalFull(OAIHttpRequestWorker *worker);
    void getTenantSignalFull(OAIHttpRequestWorker *worker, OAITenantRead summary);
    void listTenantUsersSignalFull(OAIHttpRequestWorker *worker, OAIPaginatedResult_UserRead_ summary);
    void listTenantsSignalFull(OAIHttpRequestWorker *worker, QList<OAITenantRead> summary);
    void updateTenantSignalFull(OAIHttpRequestWorker *worker, OAITenantRead summary);

    void createTenantSignalE(OAITenantRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteTenantSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteTenantUserSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getTenantSignalE(OAITenantRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listTenantUsersSignalE(OAIPaginatedResult_UserRead_ summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listTenantsSignalE(QList<OAITenantRead> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateTenantSignalE(OAITenantRead summary, QNetworkReply::NetworkError error_type, QString error_str);

    void createTenantSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteTenantSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteTenantUserSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getTenantSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listTenantUsersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listTenantsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateTenantSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif