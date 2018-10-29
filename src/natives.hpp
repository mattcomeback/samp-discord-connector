#pragma once

#include "sdk.hpp"

#define AMX_DECLARE_NATIVE(native) \
	cell AMX_NATIVE_CALL native(AMX *amx, cell *params)

#define AMX_DEFINE_NATIVE(native) \
	{#native, Native::native},


namespace Native
{
	//AMX_DECLARE_NATIVE(native_name);
	AMX_DECLARE_NATIVE(DCC_FindChannelByName);
	AMX_DECLARE_NATIVE(DCC_FindChannelById);
	AMX_DECLARE_NATIVE(DCC_GetChannelId);
	AMX_DECLARE_NATIVE(DCC_GetChannelType);
	AMX_DECLARE_NATIVE(DCC_GetChannelGuild);
	AMX_DECLARE_NATIVE(DCC_GetChannelName);
	AMX_DECLARE_NATIVE(DCC_GetChannelTopic);
	AMX_DECLARE_NATIVE(DCC_GetChannelPosition);
	AMX_DECLARE_NATIVE(DCC_IsChannelNsfw);
	AMX_DECLARE_NATIVE(DCC_SendChannelMessage);

	AMX_DECLARE_NATIVE(DCC_GetMessageId);
	AMX_DECLARE_NATIVE(DCC_GetMessageChannel);
	AMX_DECLARE_NATIVE(DCC_GetMessageAuthor);
	AMX_DECLARE_NATIVE(DCC_GetMessageContent);
	AMX_DECLARE_NATIVE(DCC_IsMessageMentioningEveryone);
	AMX_DECLARE_NATIVE(DCC_GetMessageUserMentionCount);
	AMX_DECLARE_NATIVE(DCC_GetMessageUserMention);
	AMX_DECLARE_NATIVE(DCC_GetMessageRoleMentionCount);
	AMX_DECLARE_NATIVE(DCC_GetMessageRoleMention);

	AMX_DECLARE_NATIVE(DCC_FindUserByName);
	AMX_DECLARE_NATIVE(DCC_FindUserById);
	AMX_DECLARE_NATIVE(DCC_GetUserId);
	AMX_DECLARE_NATIVE(DCC_GetUserName);
	AMX_DECLARE_NATIVE(DCC_GetUserDiscriminator);
	AMX_DECLARE_NATIVE(DCC_IsUserBot);
	AMX_DECLARE_NATIVE(DCC_IsUserVerified);

	AMX_DECLARE_NATIVE(DCC_FindRoleByName);
	AMX_DECLARE_NATIVE(DCC_FindRoleById);
	AMX_DECLARE_NATIVE(DCC_GetRoleId);
	AMX_DECLARE_NATIVE(DCC_GetRoleName);
	AMX_DECLARE_NATIVE(DCC_GetRoleColor);
	AMX_DECLARE_NATIVE(DCC_GetRolePermissions);
	AMX_DECLARE_NATIVE(DCC_IsRoleHoist);
	AMX_DECLARE_NATIVE(DCC_IsRoleMentionable);

	AMX_DECLARE_NATIVE(DCC_FindGuildByName);
	AMX_DECLARE_NATIVE(DCC_FindGuildById);
	AMX_DECLARE_NATIVE(DCC_GetGuildId);
	AMX_DECLARE_NATIVE(DCC_GetGuildName);
	AMX_DECLARE_NATIVE(DCC_GetGuildOwnerId);
	AMX_DECLARE_NATIVE(DCC_GetGuildRole);
	AMX_DECLARE_NATIVE(DCC_GetGuildRoleCount);
	AMX_DECLARE_NATIVE(DCC_GetGuildMember);
	AMX_DECLARE_NATIVE(DCC_GetGuildMemberCount);
	AMX_DECLARE_NATIVE(DCC_GetGuildMemberNickname);
	AMX_DECLARE_NATIVE(DCC_GetGuildMemberRole);
	AMX_DECLARE_NATIVE(DCC_GetGuildMemberRoleCount);
	AMX_DECLARE_NATIVE(DCC_HasGuildMemberRole);
	AMX_DECLARE_NATIVE(DCC_GetGuildMemberStatus);
	AMX_DECLARE_NATIVE(DCC_GetGuildChannel);
	AMX_DECLARE_NATIVE(DCC_GetGuildChannelCount);
	AMX_DECLARE_NATIVE(DCC_GetAllGuilds);
};
