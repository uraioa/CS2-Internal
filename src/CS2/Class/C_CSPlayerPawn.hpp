﻿#pragma once
#include "C_BaseEntity.hpp"

namespace CS2::Class
{
    // C_BaseModelEntity
    class C_BaseModelEntity : public C_BaseEntity
    {
    public:
    };

    // CBaseAnimGraph
    class CBaseAnimGraph : public C_BaseModelEntity
    {
    public:
    };

    // C_BaseFlex
    class C_BaseFlex : public CBaseAnimGraph
    {
    public:
    };

    // C_BaseCombatCharacter
    class C_BaseCombatCharacter : public C_BaseFlex
    {
    public:
    };

    // C_BasePlayerPawn
    class C_BasePlayerPawn : public C_BaseCombatCharacter
    {
    public:
    };

    class EntitySpottedState_t
    {
    public:
        void    *vt;
        bool     m_bSpotted;
        uint32_t m_bSpottedByMask[2];

        uint64_t GetSpottedByMask()
        {
            return m_bSpottedByMask[0] | ((uint64_t)m_bSpottedByMask[1] << 32);
        }
    };

    // C_CSPlayerPawnBase
    class C_CSPlayerPawnBase : public C_BasePlayerPawn
    {
    public:
        SCHEMA(int, m_iIDEntIndex, "m_iIDEntIndex", "C_CSPlayerPawnBase", "client.dll");
        SCHEMA(SDK::Vector, m_vecLastClipCameraPos, "m_vecLastClipCameraPos", "C_CSPlayerPawnBase", "client.dll");
        SCHEMA(EntitySpottedState_t, m_entitySpottedState, "m_entitySpottedState", "C_CSPlayerPawnBase", "client.dll"); // EntitySpottedState_t
    };

    // C_CSPlayerPawn
    class C_CSPlayerPawn : public C_CSPlayerPawnBase
    {
    public:
    };

} // namespace CS2::Class
