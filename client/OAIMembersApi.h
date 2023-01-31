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

#ifndef OAI_OAIMembersApi_H
#define OAI_OAIMembersApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIHTTPValidationError.h"
#include "OAIOrgMemberRead.h"
#include "OAIOrgMemberUpdate.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIMembersApi : public QObject {
    Q_OBJECT

public:
    OAIMembersApi(const int timeOut = 0);
    ~OAIMembersApi();

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
    * @param[in]  member_id QString [required]
    */
    void deleteOrganizationMember(const QString &member_id);


    void getAuthenticatedMember();

    /**
    * @param[in]  member_id QString [required]
    */
    void getOrganizationMember(const QString &member_id);

    /**
    * @param[in]  page qint32 [optional]
    * @param[in]  per_page qint32 [optional]
    */
    void listOrganizationMembers(const ::OpenAPI::OptionalParam<qint32> &page = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &per_page = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  member_id QString [required]
    * @param[in]  oai_org_member_update OAIOrgMemberUpdate [required]
    */
    void updateOrganizationMember(const QString &member_id, const OAIOrgMemberUpdate &oai_org_member_update);


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

    void deleteOrganizationMemberCallback(OAIHttpRequestWorker *worker);
    void getAuthenticatedMemberCallback(OAIHttpRequestWorker *worker);
    void getOrganizationMemberCallback(OAIHttpRequestWorker *worker);
    void listOrganizationMembersCallback(OAIHttpRequestWorker *worker);
    void updateOrganizationMemberCallback(OAIHttpRequestWorker *worker);

signals:

    void deleteOrganizationMemberSignal();
    void getAuthenticatedMemberSignal(OAIOrgMemberRead summary);
    void getOrganizationMemberSignal(OAIOrgMemberRead summary);
    void listOrganizationMembersSignal(QList<OAIOrgMemberRead> summary);
    void updateOrganizationMemberSignal(OAIOrgMemberRead summary);

    void deleteOrganizationMemberSignalFull(OAIHttpRequestWorker *worker);
    void getAuthenticatedMemberSignalFull(OAIHttpRequestWorker *worker, OAIOrgMemberRead summary);
    void getOrganizationMemberSignalFull(OAIHttpRequestWorker *worker, OAIOrgMemberRead summary);
    void listOrganizationMembersSignalFull(OAIHttpRequestWorker *worker, QList<OAIOrgMemberRead> summary);
    void updateOrganizationMemberSignalFull(OAIHttpRequestWorker *worker, OAIOrgMemberRead summary);

    void deleteOrganizationMemberSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getAuthenticatedMemberSignalE(OAIOrgMemberRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrganizationMemberSignalE(OAIOrgMemberRead summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listOrganizationMembersSignalE(QList<OAIOrgMemberRead> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateOrganizationMemberSignalE(OAIOrgMemberRead summary, QNetworkReply::NetworkError error_type, QString error_str);

    void deleteOrganizationMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getAuthenticatedMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrganizationMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listOrganizationMembersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateOrganizationMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
