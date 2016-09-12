#pragma once

#include "../SmartPtr.hpp"

namespace xyp { namespace WoW { namespace DBFileClient {

    /// List of DBFileClient
    enum class DBList
    {
        CreatureModelData = 0,
        TaxiPathNode,
        MovieVariation,
        CharacterFaceBoneSet,
        ItemDisplayInfoMaterialRes,
        CharHairGeosets,
        ChrRaces,
        CreatureDisplayInfoCond,
        HelmetAnimScaling,
        ItemDisplayInfo,
        TextureFileData,
        SoundKit,
        SoundKitAdvanced,
        SoundKitEntry,
        SoundKitChild,
        SoundKitFallback,
        SoundEmitters,
        SoundBus,
        ModelFileData,
        VideoHardware,
        MapDifficulty,
        ConversationLine,
        Item,
        ItemSparse,
        WmoMinimapTexture,
        Achievement,
        Achievement_Category,
        AdventureJournal,
        AnimKitBoneSet,
        AnimKitBoneSetAlias,
        AnimKitConfigBoneSet,
        AnimKitConfig,
        AnimKitPriority,
        AnimKit,
        AnimKitSegment,
        AnimReplacement,
        AnimReplacementSet,
        AdventureMapPOI,
        AreaGroupMember,
        AreaPOI,
        AreaPOIState,
        AreaTrigger,
        AreaTriggerActionSet,
        AreaTriggerBox,
        AreaTriggerCylinder,
        AreaTriggerSphere,
        ArmorLocation,
        Artifact,
        ArtifactAppearance,
        ArtifactAppearanceSet,
        ArtifactCategory,
        ArtifactPower,
        ArtifactPowerLink,
        ArtifactPowerRank,
        ArtifactQuestXP,
        ArtifactUnlock,
        AuctionHouse,
        BannedAddOns,
        BankBagSlotPrices,
        BarberShopStyle,
        BattlemasterList,
        BattlePetAbility,
        BattlePetAbilityEffect,
        BattlePetAbilityState,
        BattlePetAbilityTurn,
        BattlePetBreedQuality,
        BattlePetBreedState,
        BattlePetEffectProperties,
        BattlePetNPCTeamMember,
        BattlePetSpecies,
        BattlePetSpeciesState,
        BattlePetSpeciesXAbility,
        BattlePetState,
        BattlePetVisual,
        Bounty,
        BountySet,
        BroadcastText,
        CameraEffect,
        CameraEffectEntry,
        CameraMode,
        CameraShakes,
        CastableRaidBuffs,
        Cfg_Categories,
        Cfg_Configs,
        Cfg_Regions,
        CharacterFacialHairStyles,
        CharacterLoadout,
        CharacterLoadoutItem,
        CharBaseInfo,
        CharBaseSection,
        CharComponentTextureLayouts,
        CharComponentTextureSections,
        CharSections,
        CharShipmentContainer,
        CharShipment,
        CharStartOutfit,
        CharTitles,
        ChatChannels,
        ChatProfanity,
        ChrClasses,
        ChrClassesXPowerTypes,
        ChrClassRaceSex,
        ChrClassTitle,
        ChrClassUIDisplay,
        ChrClassVillain,
        ChrSpecialization,
        ChrUpgradeBucket,
        ChrUpgradeBucketSpell,
        ChrUpgradeTier,
        CinematicCamera,
        CinematicSequences,
        CombatCondition,
        ComponentModelFileData,
        ComponentTextureFileData,
        Creature,
        CreatureDisplayInfo,
        CreatureDisplayInfoExtra,
        CreatureDisplayInfoTrn,
        CreatureDispXUiCamera,
        CreatureDifficulty,
        CreatureFamily,
        CreatureImmunities,
        CreatureMovementInfo,
        CreatureSoundData,
        CreatureType,
        Criteria,
        CriteriaTree,
        CriteriaTreeXEffect,
        CurrencyCategory,
        CurrencyTypes,
        Curve,
        CurvePoint,
        DeathThudLookups,
        DecalProperties,
        DeclinedWordCases,
        DeclinedWord,
        DestructibleModelData,
        Difficulty,
        DissolveEffect,
        DungeonEncounter,
        DungeonMap,
        DungeonMapChunk,
        DurabilityCosts,
        DurabilityQuality,
        EdgeGlowEffect,
        Emotes,
        EmotesTextData,
        EmotesText,
        EmotesTextSound,
        EnvironmentalDamage,
        Exhaustion,
        Faction,
        FactionGroup,
        FactionTemplate,
        FootstepTerrainLookup,
        FriendshipRepReaction,
        FriendshipReputation,
        GameObjectArtKit,
        GameObjectDiffAnimMap,
        GameObjectDisplayInfo,
        GameObjectDisplayInfoXSoundKit,
        GameObjects,
        GameTips,
        GarrAbilityCategory,
        GarrAbility,
        GarrAbilityEffect,
        GarrBuilding,
        GarrBuildingDoodadSet,
        GarrBuildingPlotInst,
        GarrClassSpec,
        GarrClassSpecPlayerCond,
        GarrEncounter,
        GarrEncounterSetXEncounter,
        GarrEncounterXMechanic,
        GarrFollItemSetMember,
        GarrFollSupportSpell,
        GarrFollower,
        GarrFollowerLevelXP,
        GarrFollowerQuality,
        GarrFollowerSetXFollower,
        GarrFollowerType,
        GarrFollowerUICreature,
        GarrFollowerXAbility,
        GarrMechanic,
        GarrMechanicSetXMechanic,
        GarrMechanicType,
        GarrMission,
        GarrMissionTexture,
        GarrMissionType,
        GarrMissionXEncounter,
        GarrMissionXFollower,
        GarrMssnBonusAbility,
        GarrPlotBuilding,
        GarrPlotInstance,
        GarrPlot,
        GarrPlotUICategory,
        GarrTalent,
        GarrTalentTree,
        GarrType,
        GarrSiteLevel,
        GarrSiteLevelPlotInst,
        GarrSpecialization,
        GarrString,
        GarrUiAnimClassInfo,
        GarrUiAnimRaceInfo,
        GemProperties,
        GlobalStrings,
        GlyphBindableSpell,
        GlyphExclusiveCategory,
        GlyphProperties,
        GlyphRequiredSpec,
        GMSurveyAnswers,
        GMSurveyCurrentSurvey,
        GMSurveyQuestions,
        GMSurveySurveys,
        GroupFinderActivity,
        GroupFinderActivityGrp,
        GroupFinderCategory,
        GuildColorBackground,
        GuildColorBorder,
        GuildColorEmblem,
        GuildPerkSpells,
        Heirloom,
        HelmetGeosetVisData,
        HighlightColor,
        Holidays,
        HolidayDescriptions,
        HolidayNames,
        ImportPriceArmor,
        ImportPriceQuality,
        ImportPriceShield,
        ImportPriceWeapon,
        InvasionClientData,
        ItemAppearance,
        ItemAppearanceXUiCamera,
        ItemArmorQuality,
        ItemArmorShield,
        ItemArmorTotal,
        ItemBagFamily,
        ItemBonus,
        ItemBonusListLevelDelta,
        ItemBonusTreeNode,
        ItemChildEquipment,
        ItemClass,
        ItemContextPickerEntry,
        ItemCurrencyCost,
        ItemDamageAmmo,
        ItemDamageOneHandCaster,
        ItemDamageOneHand,
        ItemDamageTwoHandCaster,
        ItemDamageTwoHand,
        ItemDisenchantLoot,
        ItemDisplayXUiCamera,
        ItemEffect,
        ItemExtendedCost,
        ItemGroupSounds,
        ItemLimitCategory,
        ItemLimitCategoryCondition,
        ItemModifiedAppearance,
        ItemModifiedAppearanceExtra,
        ItemNameDescription,
        ItemPetFood,
        ItemPriceBase,
        ItemRandomProperties,
        ItemRandomSuffix,
        ItemRangedDisplayInfo,
        ItemSearchName,
        ItemSet,
        ItemSetSpell,
        ItemSpec,
        ItemSpecOverride,
        ItemSubClass,
        ItemSubClassMask,
        ItemUpgrade,
        ItemVisualEffects,
        ItemVisuals,
        ItemXBonusTree,
        JournalEncounter,
        JournalEncounterCreature,
        JournalEncounterItem,
        JournalEncounterSection,
        JournalEncounterXDifficulty,
        JournalInstance,
        JournalItemXDifficulty,
        JournalSectionXDifficulty,
        JournalTier,
        JournalTierXInstance,
        KeyChain,
        KeystoneAffix,
        Languages,
        LanguageWords,
        LfgDungeonExpansion,
        LfgDungeonGroup,
        LfgDungeons,
        LfgDungeonsGroupingMap,
        LfgRoleRequirement,
        LoadingScreens,
        LoadingScreenTaxiSplines,
        Locale,
        Location,
        Lock,
        LockType,
        LookAtController,
        MailTemplate,
        ManifestInterfaceActionIcon,
        ManifestInterfaceData,
        ManifestInterfaceItemIcon,
        ManifestInterfaceTOCData,
        MapChallengeMode,
        MapDifficultyXCondition,
        MarketingPromotionsXLocale,
        Material,
        MinorTalent,
        ModifierTree,
        Mount,
        MountCapability,
        MountTypeXCapability,
        Movie,
        MovieFileData,
        NameGen,
        NamesProfanity,
        NamesReserved,
        NamesReservedLocale,
        NpcModelItemSlotDisplayInfo,
        NPCSounds,
        ObjectEffect,
        ObjectEffectGroup,
        ObjectEffectModifier,
        ObjectEffectPackage,
        ObjectEffectPackageElem,
        OutlineEffect,
        OverrideSpellData,
        PageTextMaterial,
        PaperDollItemFrame,
        ParticleColor,
        Path,
        PathNode,
        PathNodeProperty,
        PathProperty,
        Phase,
        PhaseShiftZoneSounds,
        PhaseXPhaseGroup,
        PlayerCondition,
        Positioner,
        PositionerState,
        PositionerStateEntry,
        PowerDisplay,
        PowerType,
        PrestigeLevelInfo,
        PvpBracketTypes,
        PvpDifficulty,
        PvpItem,
        PvpReward,
        PvpTalent,
        PvpTalentUnlock,
        RewardPack,
        RewardPackXCurrencyType,
        RewardPackXItem,
        QuestFactionReward,
        QuestFeedbackEffect,
        QuestInfo,
        QuestLine,
        QuestLineXQuest,
        QuestMoneyReward,
        QuestObjective,
        QuestPackageItem,
        QuestPOIBlob,
        QuestPOIPoint,
        QuestPOIPointCliTask,
        QuestSort,
        QuestV2CliTask,
        QuestV2,
        QuestXP,
        RacialMounts,
        RandPropPoints,
        ResearchBranch,
        ResearchField,
        ResearchProject,
        ResearchSite,
        Resistances,
        RulesetItemUpgrade,
        ScalingStatDistribution,
        Scenario,
        ScenarioEventEntry,
        ScenarioStep,
        SceneScriptPackage,
        SceneScriptPackageMember,
        SceneScript,
        ScheduledInterval,
        ScheduledWorldStateGroup,
        ScheduledWorldState,
        ScheduledWorldStateXUniqCat,
        ScreenEffect,
        ScreenLocation,
        SeamlessSite,
        ServerMessages,
        ShadowyEffect,
        SkillLine,
        SkillLineAbility,
        SkillRaceClassInfo,
        SoundAmbienceFlavor,
        SoundAmbience,
        SoundOverride,
        SoundProviderPreferences,
        SourceInfo,
        SpamMessages,
        SpecializationSpells,
        Spell,
        SpellActionBarPref,
        SpellActivationOverlay,
        SpellAuraOptions,
        SpellAuraRestrictions,
        SpellAuraVisibility,
        SpellAuraVisXChrSpec,
        SpellCategories,
        SpellCategory,
        SpellCastingRequirements,
        SpellCastTimes,
        SpellClassOptions,
        SpellCooldowns,
        SpellDescriptionVariables,
        SpellDispelType,
        SpellDuration,
        SpellEffect,
        SpellEffectCameraShakes,
        SpellEffectEmission,
        SpellEffectGroupSize,
        SpellEffectScaling,
        SpellEquippedItems,
        SpellFlyout,
        SpellFlyoutItem,
        SpellFocusObject,
        SpellIcon,
        SpellInterrupts,
        SpellItemEnchantment,
        SpellItemEnchantmentCondition,
        SpellKeyboundOverride,
        SpellLabel,
        SpellLearnSpell,
        SpellLevels,
        SpellMechanic,
        SpellMisc,
        SpellMiscDifficulty,
        SpellMissileMotion,
        SpellMissile,
        SpellPower,
        SpellPowerDifficulty,
        SpellProceduralEffect,
        SpellProcsPerMinute,
        SpellProcsPerMinuteMod,
        SpellRadius,
        SpellRange,
        SpellReagentsCurrency,
        SpellReagents,
        SpellScaling,
        SpellShapeshift,
        SpellShapeshiftForm,
        SpellSpecialUnitEffect,
        SpellTargetRestrictions,
        SpellTotems,
        SpellVisualAnim,
        SpellVisualColorEffect,
        SpellVisualEffectName,
        SpellVisualKitAreaModel,
        SpellVisualKitModelAttach,
        SpellVisualMissile,
        SpellVisualKit,
        SpellVisualKitEffect,
        SpellVisual,
        SpellXSpellVisual,
        Stationery,
        StringLookups,
        SummonProperties,
        TactKey,
        TactKeyLookup,
        Talent,
        TaxiNodes,
        TaxiPath,
        TerrainTypeSounds,
        TotemCategory,
        Toy,
        TradeSkillCategory,
        TradeSkillItem,
        TransformMatrix,
        TransmogSet,
        TransmogSetItem,
        TransportAnimation,
        TransportPhysics,
        TransportRotation,
        Trophy,
        UiCamera,
        UiCameraType,
        UiCamFbackTransmogChrRace,
        UiCamFbackTransmogWeapon,
        UiMapPOI,
        UiTextureAtlas,
        UiTextureAtlasMember,
        UnitBlood,
        UnitBloodLevels,
        UnitCondition,
        UnitPowerBar,
        Vehicle,
        VehicleSeat,
        VehicleUIIndicator,
        VehicleUIIndSeat,
        Vignette,
        VocalUISounds,
        WbAccessControlList,
        WbCertBlacklist,
        WbCertWhitelist,
        WbPermissions,
        WeaponImpactSounds,
        WeaponSwingSounds2,
        WeaponTrail,
        WeaponTrailModelDef,
        WeaponTrailParam,
        World_PVP_Area,
        WorldBossLockout,
        WorldChunkSounds,
        WorldEffect,
        WorldElapsedTimer,
        WorldMapArea,
        WorldMapContinent,
        WorldMapOverlay,
        WorldMapTransforms,
        WorldStateExpression,
        WorldStateUI,
        WorldStateZoneSounds,
        ZoneIntroMusicTable,
        ZoneMusic,
        UiTextureKit,
        AreaTable,
        AnimationData,
        BoneWindModifiers,
        BoneWindModifierModel,
        CloakDampening,
        DeviceBlacklist,
        DriverBlacklist,
        DeviceDefaultSettings,
        FootprintTextures,
        FullScreenEffect,
        GroundEffectDoodad,
        GroundEffectTexture,
        Light,
        LightData,
        LightParams,
        LightSkybox,
        LiquidMaterial,
        LiquidObject,
        LiquidType,
        ManifestMP3,
        Map,
        ModelAnimCloakDampening,
        ModelRibbonQuality,
        RibbonQuality,
        SoundEmitterPillPoints,
        SoundFilter,
        SoundFilterElem,
        SpellChainEffects,
        Startup_Strings,
        TerrainMaterial,
        TerrainType,
        TextureBlendSet,
        Weather,
        WindSettings,
        WMOAreaTable,
        ZoneLightPoint,
        ZoneLight
    };

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    /// DBFileClient manager
    class IDBFileClientManager
    {
        public:
            /// Destructor
            virtual ~IDBFileClientManager() { }

            /// Get row
            /// @p_DB2   : Type of DB2
            /// @p_RowID : Record ID
            virtual void * GetRowPtr(DBList p_DB2, uint32_t p_RowID) = 0;
            /// Get row instance
            /// @p_DB2   : Type of DB2
            /// @p_RowID : Row ID
            template<typename T> T* GetRow(DBList p_DB2, uint32_t p_RowID)
            {
                return reinterpret_cast<T*>(GetRowPtr(p_DB2, p_RowID));
            }

    };

}   ///< namespace DBFileClient
}   ///< namespace WoW
}   ///< namespace xyp