QT += network

HEADERS += \
# Models
    $${PWD}/OAIAPIKeyCreate.h \
    $${PWD}/OAIAPIKeyOwnerType.h \
    $${PWD}/OAIAPIKeyRead.h \
    $${PWD}/OAIAPIKeyScopeRead.h \
    $${PWD}/OAIActionBlockEditable.h \
    $${PWD}/OAIActionBlockRead.h \
    $${PWD}/OAIActionObject.h \
    $${PWD}/OAIActor.h \
    $${PWD}/OAIAddRolePermissions.h \
    $${PWD}/OAIAttributeBlockEditable.h \
    $${PWD}/OAIAttributeBlockRead.h \
    $${PWD}/OAIAttributeType.h \
    $${PWD}/OAIAttributes.h \
    $${PWD}/OAIAuditLog.h \
    $${PWD}/OAIAuditLogObjects.h \
    $${PWD}/OAIAuthnMeAPIKeyRead.h \
    $${PWD}/OAIAuthnMeMemberRead.h \
    $${PWD}/OAIAuthnMeRead.h \
    $${PWD}/OAIAuthnMeUserRead.h \
    $${PWD}/OAIConditionSetCreate.h \
    $${PWD}/OAIConditionSetRead.h \
    $${PWD}/OAIConditionSetRuleCreate.h \
    $${PWD}/OAIConditionSetRuleRead.h \
    $${PWD}/OAIConditionSetRuleRemove.h \
    $${PWD}/OAIConditionSetType.h \
    $${PWD}/OAIConditionSetUpdate.h \
    $${PWD}/OAIDataSourceConfig.h \
    $${PWD}/OAIDataSourceEntry.h \
    $${PWD}/OAIDetailedAuditLog.h \
    $${PWD}/OAIDevLogin.h \
    $${PWD}/OAIDummyEngineModel.h \
    $${PWD}/OAIElementsConfigCreate.h \
    $${PWD}/OAIElementsConfigRead.h \
    $${PWD}/OAIElementsConfigRuntimeRead.h \
    $${PWD}/OAIElementsConfigUpdate.h \
    $${PWD}/OAIElementsEnvTypeRead.h \
    $${PWD}/OAIElementsEnvTypeUpdate.h \
    $${PWD}/OAIElementsPermissionLevel.h \
    $${PWD}/OAIElementsRoleRead.h \
    $${PWD}/OAIElementsType.h \
    $${PWD}/OAIElementsUserCreate.h \
    $${PWD}/OAIElementsUserRoleCreate.h \
    $${PWD}/OAIElementsUserRoleRemove.h \
    $${PWD}/OAIEmbeddedLoginRequestOutput.h \
    $${PWD}/OAIEngine.h \
    $${PWD}/OAIEnvironmentCreate.h \
    $${PWD}/OAIEnvironmentObject.h \
    $${PWD}/OAIEnvironmentRead.h \
    $${PWD}/OAIEnvironmentStats.h \
    $${PWD}/OAIEnvironmentUpdate.h \
    $${PWD}/OAIEnvironment_Object.h \
    $${PWD}/OAIFailedInvite.h \
    $${PWD}/OAIFullData.h \
    $${PWD}/OAIHTTPValidationError.h \
    $${PWD}/OAIIdentityRead.h \
    $${PWD}/OAIInviteAttemptResult.h \
    $${PWD}/OAIInviteCreate.h \
    $${PWD}/OAIInviteRead.h \
    $${PWD}/OAIInviteStatus.h \
    $${PWD}/OAILabels.h \
    $${PWD}/OAILanguageInstructions.h \
    $${PWD}/OAILocation_inner.h \
    $${PWD}/OAILoginResult.h \
    $${PWD}/OAIMemberAccessLevel.h \
    $${PWD}/OAIMemberAccessObj.h \
    $${PWD}/OAIMultiInviteResult.h \
    $${PWD}/OAIOPADecisionLog.h \
    $${PWD}/OAIOPAEngineDecisionLog.h \
    $${PWD}/OAIOPALClient.h \
    $${PWD}/OAIOPALabels.h \
    $${PWD}/OAIOPAMetrics.h \
    $${PWD}/OAIOnboardingStep.h \
    $${PWD}/OAIOrgMemberRead.h \
    $${PWD}/OAIOrgMemberUpdate.h \
    $${PWD}/OAIOrganizationCreate.h \
    $${PWD}/OAIOrganizationObject.h \
    $${PWD}/OAIOrganizationRead.h \
    $${PWD}/OAIOrganizationReadWithAPIKey.h \
    $${PWD}/OAIOrganizationUpdate.h \
    $${PWD}/OAIOrganization_Object.h \
    $${PWD}/OAIPDPConfigObject.h \
    $${PWD}/OAIPDPConfigRead.h \
    $${PWD}/OAIPDPContext.h \
    $${PWD}/OAIPDPState.h \
    $${PWD}/OAIPDPStateUpdate.h \
    $${PWD}/OAIPaginatedResult_APIKeyRead_.h \
    $${PWD}/OAIPaginatedResult_AuditLog_.h \
    $${PWD}/OAIPaginatedResult_ElementsConfigRead_.h \
    $${PWD}/OAIPaginatedResult_OPADecisionLog_.h \
    $${PWD}/OAIPaginatedResult_UserRead_.h \
    $${PWD}/OAIPdp.h \
    $${PWD}/OAIPdpValues.h \
    $${PWD}/OAIPdp_Config_Object.h \
    $${PWD}/OAIPermissionLevelRoleRead.h \
    $${PWD}/OAIPolicyRepoCreate.h \
    $${PWD}/OAIPolicyRepoRead.h \
    $${PWD}/OAIPolicyRepoStatus.h \
    $${PWD}/OAIProgrammingLanguage.h \
    $${PWD}/OAIProjectCreate.h \
    $${PWD}/OAIProjectObject.h \
    $${PWD}/OAIProjectRead.h \
    $${PWD}/OAIProjectUpdate.h \
    $${PWD}/OAIProject_Object.h \
    $${PWD}/OAIRaw_Data.h \
    $${PWD}/OAIRelationshipTupleObject.h \
    $${PWD}/OAIRemoteConfig.h \
    $${PWD}/OAIRemoveRolePermissions.h \
    $${PWD}/OAIResourceActionCreate.h \
    $${PWD}/OAIResourceActionRead.h \
    $${PWD}/OAIResourceActionUpdate.h \
    $${PWD}/OAIResourceAttributeCreate.h \
    $${PWD}/OAIResourceAttributeRead.h \
    $${PWD}/OAIResourceAttributeUpdate.h \
    $${PWD}/OAIResourceAttributes.h \
    $${PWD}/OAIResourceCreate.h \
    $${PWD}/OAIResourceInstanceCreate.h \
    $${PWD}/OAIResourceInstanceRead.h \
    $${PWD}/OAIResourceInstanceUpdate.h \
    $${PWD}/OAIResourceRead.h \
    $${PWD}/OAIResourceReplace.h \
    $${PWD}/OAIResourceRoleCreate.h \
    $${PWD}/OAIResourceRoleRead.h \
    $${PWD}/OAIResourceRoleUpdate.h \
    $${PWD}/OAIResourceTypeObject.h \
    $${PWD}/OAIResourceUpdate.h \
    $${PWD}/OAIResource_Id.h \
    $${PWD}/OAIRoleAssignmentCreate.h \
    $${PWD}/OAIRoleAssignmentRead.h \
    $${PWD}/OAIRoleAssignmentRemove.h \
    $${PWD}/OAIRoleBlock.h \
    $${PWD}/OAIRoleCreate.h \
    $${PWD}/OAIRoleData.h \
    $${PWD}/OAIRoleRead.h \
    $${PWD}/OAIRoleUpdate.h \
    $${PWD}/OAISSHAuthData.h \
    $${PWD}/OAISettings.h \
    $${PWD}/OAIStatistics.h \
    $${PWD}/OAITenantCreate.h \
    $${PWD}/OAITenantObject.h \
    $${PWD}/OAITenantRead.h \
    $${PWD}/OAITenantUpdate.h \
    $${PWD}/OAIUserCreate.h \
    $${PWD}/OAIUserData.h \
    $${PWD}/OAIUserLoginRequestInput.h \
    $${PWD}/OAIUserObject.h \
    $${PWD}/OAIUserRead.h \
    $${PWD}/OAIUserRole.h \
    $${PWD}/OAIUserRoleCreate.h \
    $${PWD}/OAIUserRoleRemove.h \
    $${PWD}/OAIUserUpdate.h \
    $${PWD}/OAIValidationError.h \
    $${PWD}/OAIWebhookCreate.h \
    $${PWD}/OAIWebhookRead.h \
    $${PWD}/OAIWebhookUpdate.h \
# APIs
    $${PWD}/OAIAPIKeysApi.h \
    $${PWD}/OAIAuditElementsDataApi.h \
    $${PWD}/OAIAuditLogsApi.h \
    $${PWD}/OAIAuthenticationApi.h \
    $${PWD}/OAIConditionSetRulesApi.h \
    $${PWD}/OAIConditionSetsApi.h \
    $${PWD}/OAIDecisionLogsApi.h \
    $${PWD}/OAIDecisionLogsIngressApi.h \
    $${PWD}/OAIDefaultApi.h \
    $${PWD}/OAIElementsConfigsApi.h \
    $${PWD}/OAIEnvironmentsApi.h \
    $${PWD}/OAIInstructionsApi.h \
    $${PWD}/OAIMembersApi.h \
    $${PWD}/OAIOPALDataApi.h \
    $${PWD}/OAIOrganizationsApi.h \
    $${PWD}/OAIPolicyApi.h \
    $${PWD}/OAIPolicyDecisionPointsApi.h \
    $${PWD}/OAIPolicyGitRepositoriesApi.h \
    $${PWD}/OAIProjectsApi.h \
    $${PWD}/OAIResourceActionsApi.h \
    $${PWD}/OAIResourceAttributesApi.h \
    $${PWD}/OAIResourceInstancesApi.h \
    $${PWD}/OAIResourceRolesApi.h \
    $${PWD}/OAIResourcesApi.h \
    $${PWD}/OAIRoleAssignmentsApi.h \
    $${PWD}/OAIRolesApi.h \
    $${PWD}/OAITenantsApi.h \
    $${PWD}/OAIUserAttributesApi.h \
    $${PWD}/OAIUsersApi.h \
    $${PWD}/OAIUsersElementsDataApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIEnum.h \
    $${PWD}/OAIHttpFileElement.h \
    $${PWD}/OAIServerConfiguration.h \
    $${PWD}/OAIServerVariable.h \
    $${PWD}/OAIOauth.h

SOURCES += \
# Models
    $${PWD}/OAIAPIKeyCreate.cpp \
    $${PWD}/OAIAPIKeyOwnerType.cpp \
    $${PWD}/OAIAPIKeyRead.cpp \
    $${PWD}/OAIAPIKeyScopeRead.cpp \
    $${PWD}/OAIActionBlockEditable.cpp \
    $${PWD}/OAIActionBlockRead.cpp \
    $${PWD}/OAIActionObject.cpp \
    $${PWD}/OAIActor.cpp \
    $${PWD}/OAIAddRolePermissions.cpp \
    $${PWD}/OAIAttributeBlockEditable.cpp \
    $${PWD}/OAIAttributeBlockRead.cpp \
    $${PWD}/OAIAttributeType.cpp \
    $${PWD}/OAIAttributes.cpp \
    $${PWD}/OAIAuditLog.cpp \
    $${PWD}/OAIAuditLogObjects.cpp \
    $${PWD}/OAIAuthnMeAPIKeyRead.cpp \
    $${PWD}/OAIAuthnMeMemberRead.cpp \
    $${PWD}/OAIAuthnMeRead.cpp \
    $${PWD}/OAIAuthnMeUserRead.cpp \
    $${PWD}/OAIConditionSetCreate.cpp \
    $${PWD}/OAIConditionSetRead.cpp \
    $${PWD}/OAIConditionSetRuleCreate.cpp \
    $${PWD}/OAIConditionSetRuleRead.cpp \
    $${PWD}/OAIConditionSetRuleRemove.cpp \
    $${PWD}/OAIConditionSetType.cpp \
    $${PWD}/OAIConditionSetUpdate.cpp \
    $${PWD}/OAIDataSourceConfig.cpp \
    $${PWD}/OAIDataSourceEntry.cpp \
    $${PWD}/OAIDetailedAuditLog.cpp \
    $${PWD}/OAIDevLogin.cpp \
    $${PWD}/OAIDummyEngineModel.cpp \
    $${PWD}/OAIElementsConfigCreate.cpp \
    $${PWD}/OAIElementsConfigRead.cpp \
    $${PWD}/OAIElementsConfigRuntimeRead.cpp \
    $${PWD}/OAIElementsConfigUpdate.cpp \
    $${PWD}/OAIElementsEnvTypeRead.cpp \
    $${PWD}/OAIElementsEnvTypeUpdate.cpp \
    $${PWD}/OAIElementsPermissionLevel.cpp \
    $${PWD}/OAIElementsRoleRead.cpp \
    $${PWD}/OAIElementsType.cpp \
    $${PWD}/OAIElementsUserCreate.cpp \
    $${PWD}/OAIElementsUserRoleCreate.cpp \
    $${PWD}/OAIElementsUserRoleRemove.cpp \
    $${PWD}/OAIEmbeddedLoginRequestOutput.cpp \
    $${PWD}/OAIEngine.cpp \
    $${PWD}/OAIEnvironmentCreate.cpp \
    $${PWD}/OAIEnvironmentObject.cpp \
    $${PWD}/OAIEnvironmentRead.cpp \
    $${PWD}/OAIEnvironmentStats.cpp \
    $${PWD}/OAIEnvironmentUpdate.cpp \
    $${PWD}/OAIEnvironment_Object.cpp \
    $${PWD}/OAIFailedInvite.cpp \
    $${PWD}/OAIFullData.cpp \
    $${PWD}/OAIHTTPValidationError.cpp \
    $${PWD}/OAIIdentityRead.cpp \
    $${PWD}/OAIInviteAttemptResult.cpp \
    $${PWD}/OAIInviteCreate.cpp \
    $${PWD}/OAIInviteRead.cpp \
    $${PWD}/OAIInviteStatus.cpp \
    $${PWD}/OAILabels.cpp \
    $${PWD}/OAILanguageInstructions.cpp \
    $${PWD}/OAILocation_inner.cpp \
    $${PWD}/OAILoginResult.cpp \
    $${PWD}/OAIMemberAccessLevel.cpp \
    $${PWD}/OAIMemberAccessObj.cpp \
    $${PWD}/OAIMultiInviteResult.cpp \
    $${PWD}/OAIOPADecisionLog.cpp \
    $${PWD}/OAIOPAEngineDecisionLog.cpp \
    $${PWD}/OAIOPALClient.cpp \
    $${PWD}/OAIOPALabels.cpp \
    $${PWD}/OAIOPAMetrics.cpp \
    $${PWD}/OAIOnboardingStep.cpp \
    $${PWD}/OAIOrgMemberRead.cpp \
    $${PWD}/OAIOrgMemberUpdate.cpp \
    $${PWD}/OAIOrganizationCreate.cpp \
    $${PWD}/OAIOrganizationObject.cpp \
    $${PWD}/OAIOrganizationRead.cpp \
    $${PWD}/OAIOrganizationReadWithAPIKey.cpp \
    $${PWD}/OAIOrganizationUpdate.cpp \
    $${PWD}/OAIOrganization_Object.cpp \
    $${PWD}/OAIPDPConfigObject.cpp \
    $${PWD}/OAIPDPConfigRead.cpp \
    $${PWD}/OAIPDPContext.cpp \
    $${PWD}/OAIPDPState.cpp \
    $${PWD}/OAIPDPStateUpdate.cpp \
    $${PWD}/OAIPaginatedResult_APIKeyRead_.cpp \
    $${PWD}/OAIPaginatedResult_AuditLog_.cpp \
    $${PWD}/OAIPaginatedResult_ElementsConfigRead_.cpp \
    $${PWD}/OAIPaginatedResult_OPADecisionLog_.cpp \
    $${PWD}/OAIPaginatedResult_UserRead_.cpp \
    $${PWD}/OAIPdp.cpp \
    $${PWD}/OAIPdpValues.cpp \
    $${PWD}/OAIPdp_Config_Object.cpp \
    $${PWD}/OAIPermissionLevelRoleRead.cpp \
    $${PWD}/OAIPolicyRepoCreate.cpp \
    $${PWD}/OAIPolicyRepoRead.cpp \
    $${PWD}/OAIPolicyRepoStatus.cpp \
    $${PWD}/OAIProgrammingLanguage.cpp \
    $${PWD}/OAIProjectCreate.cpp \
    $${PWD}/OAIProjectObject.cpp \
    $${PWD}/OAIProjectRead.cpp \
    $${PWD}/OAIProjectUpdate.cpp \
    $${PWD}/OAIProject_Object.cpp \
    $${PWD}/OAIRaw_Data.cpp \
    $${PWD}/OAIRelationshipTupleObject.cpp \
    $${PWD}/OAIRemoteConfig.cpp \
    $${PWD}/OAIRemoveRolePermissions.cpp \
    $${PWD}/OAIResourceActionCreate.cpp \
    $${PWD}/OAIResourceActionRead.cpp \
    $${PWD}/OAIResourceActionUpdate.cpp \
    $${PWD}/OAIResourceAttributeCreate.cpp \
    $${PWD}/OAIResourceAttributeRead.cpp \
    $${PWD}/OAIResourceAttributeUpdate.cpp \
    $${PWD}/OAIResourceAttributes.cpp \
    $${PWD}/OAIResourceCreate.cpp \
    $${PWD}/OAIResourceInstanceCreate.cpp \
    $${PWD}/OAIResourceInstanceRead.cpp \
    $${PWD}/OAIResourceInstanceUpdate.cpp \
    $${PWD}/OAIResourceRead.cpp \
    $${PWD}/OAIResourceReplace.cpp \
    $${PWD}/OAIResourceRoleCreate.cpp \
    $${PWD}/OAIResourceRoleRead.cpp \
    $${PWD}/OAIResourceRoleUpdate.cpp \
    $${PWD}/OAIResourceTypeObject.cpp \
    $${PWD}/OAIResourceUpdate.cpp \
    $${PWD}/OAIResource_Id.cpp \
    $${PWD}/OAIRoleAssignmentCreate.cpp \
    $${PWD}/OAIRoleAssignmentRead.cpp \
    $${PWD}/OAIRoleAssignmentRemove.cpp \
    $${PWD}/OAIRoleBlock.cpp \
    $${PWD}/OAIRoleCreate.cpp \
    $${PWD}/OAIRoleData.cpp \
    $${PWD}/OAIRoleRead.cpp \
    $${PWD}/OAIRoleUpdate.cpp \
    $${PWD}/OAISSHAuthData.cpp \
    $${PWD}/OAISettings.cpp \
    $${PWD}/OAIStatistics.cpp \
    $${PWD}/OAITenantCreate.cpp \
    $${PWD}/OAITenantObject.cpp \
    $${PWD}/OAITenantRead.cpp \
    $${PWD}/OAITenantUpdate.cpp \
    $${PWD}/OAIUserCreate.cpp \
    $${PWD}/OAIUserData.cpp \
    $${PWD}/OAIUserLoginRequestInput.cpp \
    $${PWD}/OAIUserObject.cpp \
    $${PWD}/OAIUserRead.cpp \
    $${PWD}/OAIUserRole.cpp \
    $${PWD}/OAIUserRoleCreate.cpp \
    $${PWD}/OAIUserRoleRemove.cpp \
    $${PWD}/OAIUserUpdate.cpp \
    $${PWD}/OAIValidationError.cpp \
    $${PWD}/OAIWebhookCreate.cpp \
    $${PWD}/OAIWebhookRead.cpp \
    $${PWD}/OAIWebhookUpdate.cpp \
# APIs
    $${PWD}/OAIAPIKeysApi.cpp \
    $${PWD}/OAIAuditElementsDataApi.cpp \
    $${PWD}/OAIAuditLogsApi.cpp \
    $${PWD}/OAIAuthenticationApi.cpp \
    $${PWD}/OAIConditionSetRulesApi.cpp \
    $${PWD}/OAIConditionSetsApi.cpp \
    $${PWD}/OAIDecisionLogsApi.cpp \
    $${PWD}/OAIDecisionLogsIngressApi.cpp \
    $${PWD}/OAIDefaultApi.cpp \
    $${PWD}/OAIElementsConfigsApi.cpp \
    $${PWD}/OAIEnvironmentsApi.cpp \
    $${PWD}/OAIInstructionsApi.cpp \
    $${PWD}/OAIMembersApi.cpp \
    $${PWD}/OAIOPALDataApi.cpp \
    $${PWD}/OAIOrganizationsApi.cpp \
    $${PWD}/OAIPolicyApi.cpp \
    $${PWD}/OAIPolicyDecisionPointsApi.cpp \
    $${PWD}/OAIPolicyGitRepositoriesApi.cpp \
    $${PWD}/OAIProjectsApi.cpp \
    $${PWD}/OAIResourceActionsApi.cpp \
    $${PWD}/OAIResourceAttributesApi.cpp \
    $${PWD}/OAIResourceInstancesApi.cpp \
    $${PWD}/OAIResourceRolesApi.cpp \
    $${PWD}/OAIResourcesApi.cpp \
    $${PWD}/OAIRoleAssignmentsApi.cpp \
    $${PWD}/OAIRolesApi.cpp \
    $${PWD}/OAITenantsApi.cpp \
    $${PWD}/OAIUserAttributesApi.cpp \
    $${PWD}/OAIUsersApi.cpp \
    $${PWD}/OAIUsersElementsDataApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp \
    $${PWD}/OAIOauth.cpp