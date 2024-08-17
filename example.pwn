#include <npc-streamer>

public OnGameModeInit()
{
    // NPC'yi oluştur
    new npcid = SNPC_Create("npc_name", "npc_script");

    // NPC'yi bir pozisyona yerleştir
    SNPC_SetPos(npcid, 1000.0, 1000.0, 10.0);
    SNPC_SetFacingAngle(npcid, 90.0);

    // NPC'nin akış mesafesini ayarla
    SNPC_SetStreamDistance(npcid, 300.0);

    // NPC'nin sağlığını ayarla
    SNPC_SetHealth(npcid, 100.0);

    // NPC'ye silah ver
    SNPC_SetWeapon(npcid, 24); // Desert Eagle

    // NPC'ye animasyon ver
    SNPC_SetAnimation(npcid, "PED", "WALK", 4.1, 1, 1, 1, 0, -1);

    // NPC'yi araca bindir
    new vehicleid = CreateVehicle(411, 1000.0, 1000.0, 10.0, 0.0, -1, -1, 600);
    SNPC_PutInVehicle(npcid, vehicleid, 0);

    // NPC'nin dövüş stilini ayarla
    SNPC_SetFightStyle(npcid, FIGHT_STYLE_BOXING);

    // NPC'yi bir hedefe saldırıya geçir
    new targetid = GetPlayerID("target_player");
    SNPC_SetAttack(npcid, targetid);

    // NPC'nin isim etiketini ayarla
    SNPC_SetNameTag(npcid, "NPC Name");

    // NPC'yi akışa sok
    SNPC_StreamIn(npcid);
}

public OnPlayerConnect(playerid)
{
    // Oyuncu bağlandığında NPC'yi akışa sok
    SNPC_StreamIn(npcid);
}

public OnPlayerDisconnect(playerid)
{
    // Oyuncu ayrıldığında NPC'yi akıştan çıkar
    SNPC_StreamOut(npcid);
}
