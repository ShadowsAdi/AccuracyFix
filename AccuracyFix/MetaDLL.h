#pragma once

#pragma region DLL_PRE
void DLL_PRE_CmdEnd(const edict_t* player);
#pragma endregion

#pragma region DLL_POST
void DLL_POST_ServerActivate(edict_t* pEdictList, int edictCount, int clientMax);
#pragma endregion