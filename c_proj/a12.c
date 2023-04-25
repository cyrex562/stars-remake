

undefined2 __cdecl16far FUN_1010_1074(uint param_1)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;

  pcVar4 = (char *)FUN_1018_4e74(*(uint *)(param_1 * 2 + 0x5a6a));
  if ((param_1 & 0x8000) == 0) {
    uVar5 = 0xffff;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar2 = pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar2 != '\0');
    uVar5 = ~uVar5;
    puVar7 = (undefined2 *)(pcVar4 + -uVar5);
    puVar8 = (undefined2 *)&DAT_10a8_86de;
    for (uVar6 = uVar5 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar1;
    }
    for (uVar5 = (uint)((uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
      puVar3 = puVar8;
      puVar8 = (undefined2 *)((int)puVar8 + 1);
      puVar1 = puVar7;
      puVar7 = (undefined2 *)((int)puVar7 + 1);
      *(undefined *)puVar3 = *(undefined *)puVar1;
    }
  }
  else {
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x6ca10a8,(LPCSTR)CONCAT22(pcVar4,0x10a8),
              (VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6));
  }
  return (int)&DAT_10a8_86de;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl16far FUN_1010_10d2(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;

  iVar1 = 0;
  if (0 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
    uVar3 = (undefined2)((ulong)_PTR_DAT_10a8_0000_10a8_006e >> 0x10);
    piVar2 = (int *)_PTR_DAT_10a8_0000_10a8_006e;
    do {
      if ((*piVar2 == param_1) && (piVar2[1] == param_2)) {
        return iVar1;
      }
      piVar2 = piVar2 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)PTR_DAT_10a8_0000_10a8_83c6);
  }
  return -1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __cdecl16far FUN_1010_110c(int param_1,int param_2,undefined *param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  int **ppiVar9;
  uint in_DX;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  int iVar10;
  int unaff_SS;
  uint uVar11;
  int iVar12;
  int *local_c;

  iVar12 = (int)s_From___s_c_c_10a8_10a2 + 6;
  iVar10 = 0;
  if ((int)PTR_DAT_10a8_0000_10a8_83c6 < 1) {
  }
  else {
    ppiVar9 = (int **)_PTR_DAT_10a8_0000_10a8_006e;
    do {
      piVar5 = *ppiVar9;
      uVar11 = (uint)((ulong)piVar5 >> 0x10);
      local_c._0_2_ = (uint)piVar5;
      if (((uVar11 | (uint)local_c) == 0) || (*piVar5 == param_1)) break;
      if (*piVar5 != param_1 && param_1 <= *piVar5) {
        return 0;
      }
      ppiVar9 = ppiVar9 + 1;
      iVar10 = iVar10 + 1;
      piVar5 = (int *)&PTR_DAT_10a8_0000_10a8_83c6;
    } while (*piVar5 != iVar10 && iVar10 <= *piVar5);
    local_c = (int *)((ulong)uVar11 << 0x10);
    iVar12 = unaff_SS;
  }
  if (*(int *)&PTR_DAT_10a8_0000_10a8_83c6 == iVar10) {
    return 0;
  }
  uVar6 = (ulong)local_c & 0xffff0000;
  local_c = (int *)(uVar6 | (uint)local_c);
  if (param_1 == *(int *)&PTR_DAT_10a8_0000_10a8_7b62) {
    FUN_1030_2da8((int16 *)0x0,(undefined *)0x0,CONCAT22(unaff_DI,unaff_SI));
  }
  uVar11 = (uint)(uVar6 >> 0x10);
  pbVar1 = (byte *)((uint)local_c + 5);
  *pbVar1 = *pbVar1 | 4;
  FUN_1028_5ec4(local_c);
  uVar4 = *(undefined4 *)((uint)local_c + 100);
  FUN_1038_05b8((uint)uVar4,(uint)((ulong)uVar4 >> 0x10));
  piVar5 = (int *)&PTR_DAT_10a8_0000_10a8_83c6;
  *piVar5 = *piVar5 + -1;
  iVar2 = *local_c;
  piVar5 = (int *)((int)&PTR_DAT_10a8_0000_10a8_8862 + *(int *)((uint)local_c + 2) * 0x76);
  *piVar5 = *piVar5 + -1;
  if ((((param_2 == 0) && (*(int *)((uint)local_c + 6) != -1)) &&
      (piVar7 = FUN_1010_018e(*(int *)((uint)local_c + 6)), (in_DX | (uint)piVar7) != 0)) &&
     (piVar7[1] == *(int *)&PTR_DAT_10a8_0001_10a8_00c0)) {
    param_2 = 1;
    param_3 = (undefined *)*(undefined2 *)((uint)local_c + 6);
  }
  if (*(int *)&PTR_DAT_10a8_0000_10a8_83c6 != iVar10) {
    iVar8 = iVar10 * 4 + *(int *)&PTR_DAT_10a8_0000_10a8_006e;
    uVar3 = *(undefined2 *)&PTR_DAT_10a8_0000_10a8_0070;
    FUN_10a0_0ac6(CONCAT22(uVar3,iVar8),
                  CONCAT13((char)((uint)uVar3 >> 8),CONCAT12((char)uVar3,iVar8 + 4)),
                  (*(int *)&PTR_DAT_10a8_0000_10a8_83c6 - iVar10) * 4);
  }
  FUN_1038_04ca((uint)local_c,uVar11,5);
  if (*(int *)&PTR_DAT_10a8_0000_10a8_7b62 != -1) {
    piVar5 = (int *)&PTR_DAT_10a8_0000_10a8_7b5e;
    if (*piVar5 == iVar10 || *piVar5 < iVar10) {
      if (iVar2 == *(int *)&PTR_DAT_10a8_0000_10a8_7b62) {
        if (param_2 == 0) {
          *(undefined2 *)&PTR_DAT_10a8_0000_10a8_7b4c = 0;
          *(undefined2 *)&PTR_DAT_10a8_0000_10a8_7b58 = 0;
          FUN_1008_22ba();
        }
        else {
          *(undefined2 *)&PTR_DAT_10a8_0000_10a8_7b4c = 0;
          if (param_2 == 2) {
            FUN_1028_1c46(0,param_3);
          }
          else {
            FUN_1020_24c8(0,param_3);
          }
        }
      }
    }
    else {
      piVar5 = (int *)&PTR_DAT_10a8_0000_10a8_7b5e;
      *piVar5 = *piVar5 + -1;
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * __cdecl16far FUN_1010_1284(uint param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  undefined *in_DX;
  undefined *puVar14;
  undefined *puVar15;
  undefined4 *puVar16;
  uint local_4;

  local_4 = 0xffff;
  puVar15 = (undefined *)0x0;
  if (0 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
    while( true ) {
      puVar12 = *(uint **)PTR_DAT_10a8_0000_10a8_006e;
      puVar5 = *(uint **)((int)PTR_DAT_10a8_0000_10a8_006e + 2);
      in_DX = (undefined *)((uint)puVar5 | (uint)puVar12);
      if (in_DX == (undefined *)0x0) break;
      puVar1 = puVar12 + 1;
      uVar11 = *puVar1;
      if ((int)param_1 <= (int)uVar11) {
        if ((*puVar1 != param_1 && (int)param_1 <= (int)uVar11) ||
           (uVar11 = *puVar12,
           (uVar11 & 0xff | ((byte)((ulong)uVar11 >> 8) & 1) << 8) - local_4 != 1)) break;
        uVar11 = *puVar12;
        local_4 = uVar11 & 0xff | ((byte)((ulong)uVar11 >> 8) & 1) << 8;
      }
      PTR_DAT_10a8_0000_10a8_006e = (undefined *)((int)PTR_DAT_10a8_0000_10a8_006e + 4);
      puVar15 = puVar15 + 1;
      if ((int)PTR_DAT_10a8_0000_10a8_83c6 <= (int)puVar15) break;
    }
  }
  PTR_DAT_10a8_0000_10a8_006e =
       (undefined *)
       FUN_1038_03ec(_PTR_DAT_10a8_0000_10a8_006e,
                     CONCAT22(6,(int)(PTR_DAT_10a8_0000_10a8_83c6 + 1) * 4));
  PTR_DAT_10a8_0000_10a8_0070 = in_DX;
  if (puVar15 != PTR_DAT_10a8_0000_10a8_83c6) {
    FUN_10a0_0ac6(CONCAT22(in_DX,PTR_DAT_10a8_0000_10a8_006e + (int)puVar15 * 4 + 4),
                  CONCAT22(in_DX,PTR_DAT_10a8_0000_10a8_006e + (int)puVar15 * 4),
                  ((int)PTR_DAT_10a8_0000_10a8_83c6 - (int)puVar15) * 4);
  }
  puVar10 = (undefined4 *)FUN_1038_0232(0x74,5);
  puVar9 = PTR_DAT_10a8_0000_10a8_0070;
  puVar14 = PTR_DAT_10a8_0000_10a8_006e;
  *(undefined4 **)(PTR_DAT_10a8_0000_10a8_006e + (int)puVar15 * 4) = puVar10;
  *(undefined **)(puVar14 + (int)puVar15 * 4 + 2) = in_DX;
  PTR_DAT_10a8_0000_10a8_83c6 = PTR_DAT_10a8_0000_10a8_83c6 + 1;
  piVar2 = (int *)((int)&PTR_DAT_10a8_0000_10a8_8862 + param_1 * 0x76);
  *piVar2 = *piVar2 + 1;
  puVar16 = puVar10;
  for (iVar13 = 0x1d; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar4 = puVar16;
    puVar16 = puVar16 + 1;
    *puVar4 = 0;
  }
  uVar11 = local_4 + 1 ^ *(uint *)puVar10;
  puVar4 = puVar10;
  *(uint *)puVar4 = *(uint *)puVar4 ^ (uVar11 & 0xff | ((byte)((ulong)uVar11 >> 8) & 1) << 8);
  *(uint *)((int)puVar10 + 2) = param_1;
  puVar4 = puVar10;
  *(uint *)puVar4 =
       *(uint *)puVar4 ^
       ((byte)(*(byte *)((int)puVar10 + 1) ^ (byte)((ulong)(param_1 << 9) >> 8)) & 0x1e) << 8;
  *(int *)((int)puVar10 + 6) = param_2;
  if (param_2 != -1) {
    puVar10[2] = *(undefined4 *)((int)&PTR_DAT_10a8_0000_10a8_6238 + param_2 * 4);
  }
  *(undefined2 *)((int)puVar10 + 0x62) = 1;
  pbVar3 = (byte *)((int)puVar10 + 5);
  *pbVar3 = *pbVar3 & 0xfd;
  puVar14 = in_DX;
  puVar12 = FUN_1038_0562(0x12,3,0);
  *(uint **)(puVar10 + 0x19) = puVar12;
  *(undefined2 *)((int)puVar10 + 0x66) = puVar14;
  uVar8 = puVar10[0x19];
  *(undefined *)((int)uVar8 + 3) = 1;
  iVar13 = *(int *)(puVar10 + 0x19);
  uVar6 = *(undefined2 *)((int)puVar10 + 0x66);
  uVar7 = *(undefined2 *)((int)puVar10 + 10);
  *(undefined2 *)(iVar13 + 4) = *(undefined2 *)(puVar10 + 2);
  *(undefined2 *)(iVar13 + 6) = uVar7;
  *(undefined2 *)(iVar13 + 8) = *(undefined2 *)((int)puVar10 + 6);
  puVar1 = (uint *)(iVar13 + 10);
  *puVar1 = *puVar1 ^ ((*(int *)((int)puVar10 + 6) != -1 ^ *(byte *)(iVar13 + 0xb)) & 3) << 8;
  pbVar3 = (byte *)(iVar13 + 10);
  *pbVar3 = *pbVar3 & 0xf;
  pbVar3 = (byte *)(iVar13 + 0xb);
  *pbVar3 = *pbVar3 | 4;
  pbVar3 = (byte *)(iVar13 + 10);
  *pbVar3 = *pbVar3 & 0xf0;
  if ((PTR_DAT_10a8_0000_10a8_7b5e != (undefined *)0xffff) &&
     ((int)puVar15 <= (int)PTR_DAT_10a8_0000_10a8_7b5e)) {
    PTR_DAT_10a8_0000_10a8_7b5e = PTR_DAT_10a8_0000_10a8_7b5e + 1;
  }
  return puVar10;
}



undefined4 * __cdecl16far FUN_1010_146e(int param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined2 in_DX;
  undefined2 uVar11;
  undefined2 *puVar12;
  undefined2 uVar13;

  puVar7 = FUN_1010_1284(*(uint *)(param_1 + 2),*(int *)(param_1 + 6));
  if (*(int *)(param_1 + 6) == -1) {
    puVar7[2] = *(undefined4 *)(param_1 + 8);
  }
  puVar1 = puVar7 + 1;
  *(uint *)puVar1 =
       *(uint *)puVar1 ^ ((*(byte *)((int)puVar7 + 5) ^ *(byte *)(param_1 + 5)) & 2) << 8;
  *(uint *)(puVar7 + 1) = CONCAT11(*(undefined *)((int)puVar7 + 5),*(undefined *)(param_1 + 4));
  uVar5 = *(undefined4 *)(param_1 + 100);
  bVar4 = *(byte *)((int)uVar5 + 3);
  uVar5 = puVar7[0x19];
  if ((uint)*(byte *)((int)uVar5 + 2) < (uint)bVar4) {
    uVar6 = *(undefined4 *)(param_1 + 100);
    uVar5 = puVar7[0x19];
    uVar11 = in_DX;
    iVar8 = FUN_1038_0522((uint *)uVar5,(int)((ulong)uVar5 >> 0x10),(uint)*(byte *)((int)uVar6 + 2))
    ;
    *(int *)(puVar7 + 0x19) = iVar8;
    *(undefined2 *)((int)puVar7 + 0x66) = uVar11;
  }
  uVar5 = puVar7[0x19];
  uVar13 = (undefined2)((ulong)uVar5 >> 0x10);
  uVar11 = *(undefined2 *)(param_1 + 0x66);
  puVar9 = (undefined2 *)(*(int *)(param_1 + 100) + 4);
  puVar12 = (undefined2 *)((int)uVar5 + 4);
  for (uVar10 = (uint)bVar4 * 0x12 >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    puVar2 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar3 = *puVar2;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar3 = puVar12;
    puVar12 = (undefined2 *)((int)puVar12 + 1);
    puVar2 = puVar9;
    puVar9 = (undefined2 *)((int)puVar9 + 1);
    *(undefined *)puVar3 = *(undefined *)puVar2;
  }
  uVar5 = puVar7[0x19];
  *(byte *)((int)uVar5 + 3) = bVar4;
  *(undefined2 *)((int)puVar7 + 0x62) = *(undefined2 *)(param_1 + 0x62);
  FUN_1020_3d26((char)*(undefined2 *)param_1);
  return puVar7;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool __cdecl16far FUN_1010_155a(uint *param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  long *plVar11;
  uint *puVar12;
  long *plVar13;
  bool bVar14;
  int local_16;
  undefined4 local_14;
  int *local_e;

  local_14 = 0;
  puVar4 = *_PTR_DAT_10a8_0000_10a8_006e;
  puVar8 = *(uint **)((int)_PTR_DAT_10a8_0000_10a8_006e + 2);
  iVar9 = 0;
  local_16 = 0;
  while (iVar9 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
    uVar3 = param_1[1];
    puVar1 = puVar4 + 1;
    bVar14 = *puVar1 != uVar3;
    if (bVar14 && (int)uVar3 <= (int)*puVar1) break;
    if (((bVar14) || (puVar4[4] != param_1[4])) || (puVar4[5] != param_1[5])) {
LAB_1010_15bb:
      iVar9 = iVar9 + 1;
    }
    else {
      if (((*puVar4 ^ *param_1) & 0x1ff) == 0) {
        local_14 = CONCAT22(puVar8,puVar4);
        goto LAB_1010_15bb;
      }
      puVar10 = puVar4 + 6;
      puVar12 = param_1 + 6;
      local_e = (int *)CONCAT22(puVar8,puVar4);
      iVar6 = 0x10;
      do {
        puVar1 = puVar12;
        *puVar1 = *puVar1 + *puVar10;
        *puVar10 = 0;
        puVar1 = puVar12 + 0x10;
        *puVar1 = *puVar1 + puVar10[0x10];
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      plVar11 = (long *)(param_1 + 0x26);
      iVar6 = 5;
      plVar13 = (long *)(puVar4 + 0x26);
      do {
        plVar2 = plVar11;
        *plVar2 = *plVar2 + *plVar13;
        plVar11 = plVar11 + 1;
        iVar6 = iVar6 + -1;
        plVar13 = plVar13 + 1;
      } while (iVar6 != 0);
      FUN_1010_110c(*local_e,0,(undefined *)0xffff);
      local_16 = local_16 + 1;
    }
    puVar4 = *(uint **)(PTR_DAT_10a8_0000_10a8_006e + iVar9 * 4);
    puVar8 = *(uint **)((int)(PTR_DAT_10a8_0000_10a8_006e + iVar9 * 4) + 2);
  }
  puVar8 = param_1 + 6;
  puVar4 = (uint *)((int)local_14 + 0xc);
  iVar9 = 0x10;
  do {
    *puVar4 = *puVar8;
    puVar4[0x10] = puVar8[0x10];
    puVar8 = puVar8 + 1;
    puVar4 = puVar4 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  puVar5 = (undefined4 *)((int)local_14 + 0x4c);
  iVar9 = 5;
  puVar7 = (undefined4 *)(param_1 + 0x26);
  do {
    *puVar5 = *puVar7;
    puVar5 = puVar5 + 1;
    iVar9 = iVar9 + -1;
    puVar7 = puVar7 + 1;
  } while (iVar9 != 0);
  FUN_1020_3d40((char)*param_1);
  return (bool)('\x01' - (local_16 == 0));
}



undefined2 __cdecl16far FUN_1010_16ce(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 in_DX;
  undefined4 *puVar7;
  undefined2 unaff_SS;
  bool bVar8;
  undefined4 local_84 [3];
  int local_78 [16];
  int local_58 [37];
  int local_e;
  int *local_c;
  undefined4 *local_a;
  int local_8;
  undefined4 *local_6;

  local_e = 0;
  local_c = local_78;
  local_a = param_1 + 3;
  do {
    local_8 = *(int *)local_a;
    while (iVar6 = local_8 + -1, local_8 != 0) {
      iVar4 = local_e + 1;
      bVar8 = local_e != 0;
      local_e = iVar4;
      local_8 = iVar6;
      if (bVar8) {
        puVar5 = FUN_1010_146e((int)param_1);
        puVar7 = local_84;
        local_6 = puVar5;
        for (iVar6 = 0x1d; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar3 = *puVar2;
        }
        puVar2 = local_a;
        *(int *)puVar2 = *(int *)puVar2 + -1;
        piVar1 = local_c;
        *piVar1 = *piVar1 + 1;
        FUN_1028_555a((int)param_1,(int)local_84);
        FUN_1010_0cda(0xffff,param_1);
        FUN_1010_0cda(0xffff,local_84);
      }
    }
    local_a = (undefined4 *)((int)local_a + 2);
    local_c = local_c + 1;
  } while (local_c < local_58);
  if (1 < local_e) {
    return 1;
  }
  return 0;
}



undefined2 __cdecl16far FUN_1010_1784(int param_1,uint param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;

  if (param_2 == 0xffff) {
LAB_1010_17b4:
    if (param_3 == -1) {
      puVar6 = (undefined4 *)&DAT_10a8_86de;
      puVar5 = (undefined4 *)s_Deep_Space_10a8_06d6;
      for (iVar4 = 2; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
      *(undefined *)(undefined2 *)((int)puVar6 + 2) = *(undefined *)(undefined2 *)((int)puVar5 + 2);
    }
    else {
      _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x6e110a8,
                (LPCSTR)CONCAT22((undefined2)param_3,0x10a8),param_3._2_2_);
    }
    return (int)&DAT_10a8_86de;
  }
  if (param_1 == 1) {
    uVar3 = FUN_1010_1074(param_2);
  }
  else {
    if (param_1 != 2) goto LAB_1010_17b4;
    uVar3 = FUN_1010_0ffa(param_2);
  }
  return uVar3;
}



undefined2 __cdecl16far FUN_1010_17f4(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int16 *piVar2;
  VA_LIST16 in_DX;
  int iVar3;
  undefined uVar4;

  FUN_1010_186e((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  uVar1 = FUN_10a0_0c14();
  uVar4 = (undefined)((uint)uVar1 >> 8);
  if ((int)PTR_DAT_10a8_0000_10a8_5794 < 0xf) {
    piVar2 = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x6f010a8,
                       (LPCSTR)CONCAT13(uVar4,CONCAT12((char)uVar1,0x10a8)),in_DX);
    iVar3 = (int)piVar2 + -0xd;
  }
  else {
    piVar2 = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x70310a8,
                       (LPCSTR)CONCAT13(uVar4,CONCAT12((char)uVar1,0x10a8)),in_DX);
    iVar3 = (int)piVar2 + -6;
  }
  *(undefined *)((int)&DAT_10a8_86de + iVar3) =
       *(undefined *)((int)&PTR_DAT_10a8_0000_10a8_86dc + 1 + iVar3);
  *(undefined *)((int)&PTR_DAT_10a8_0000_10a8_86dc + 1 + iVar3) =
       *(undefined *)((int)&PTR_DAT_10a8_0000_10a8_86dc + iVar3);
  *(undefined *)((int)&PTR_DAT_10a8_0000_10a8_86dc + iVar3) = 0x2e;
  return (int)&DAT_10a8_86de;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __cdecl16far FUN_1010_186e(int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  longdouble lVar2;
  long lStack_2a;

  lStack_2a = (long)(param_4 - param_2);
  lVar1 = lStack_2a * (param_4 - param_2);
  lStack_2a = (long)(param_3 - param_1);
  lVar2 = (longdouble)(lStack_2a * (param_3 - param_1) + lVar1);
  FUN_10a0_0b96();
  _PTR_DAT_10a8_0000_10a8_4c4c = (double)lVar2;
  return (int)&PTR_DAT_10a8_0000_10a8_4c4c;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool __cdecl16far FUN_1010_18d2(int param_1,int param_2,uint param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined3 extraout_var;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  undefined local_34 [6];
  uint local_2e;
  int local_2c;
  uint local_2a;
  uint local_28;
  long local_26;
  undefined4 local_22;
  int local_1e;
  ulong local_1c;
  long local_18;
  undefined4 local_14;
  uint *local_10;
  int local_c;
  long *local_a;
  uint local_8;
  undefined4 local_6;

  local_14 = 1000000000;
  local_22 = 0;
  local_26 = 0;
  local_1c = 0xffffffff;
  local_1e = -1;
  if ((param_3 & 0x40) == 0) {
    if ((param_3 & 0x80) != 0) {
      local_14 = 0;
    }
  }
  else {
    local_14 = 0xe1;
  }
  if (((param_3 & 1) != 0) && (iVar10 = 0, 0 < (int)PTR_DAT_10a8_0000_10a8_003a)) {
    plVar8 = (long *)&PTR_DAT_10a8_0000_10a8_6238;
    local_8 = (uint)&PTR_DAT_10a8_0000_10a8_6238;
    do {
      local_c = param_2 - *(int *)((int)plVar8 + 2);
      iVar7 = param_1 - *(int *)plVar8;
      local_6 = (long)iVar7 * (long)iVar7;
      if (local_6 - local_14 == 0 || local_6 < local_14) {
        local_6 = local_6 + (long)local_c * (long)local_c;
        if ((local_6 <= local_14) &&
           ((((uint)local_6 != (uint)local_14 ||
             (local_6._2_2_ = (uint)((ulong)local_6 >> 0x10), local_6._2_2_ != local_14._2_2_)) ||
            ((local_14._2_2_ | (uint)local_14) == 0)))) {
          local_14 = local_6;
          local_26 = *plVar8;
          local_1e = iVar10;
          local_22 = 0x10001;
        }
      }
      plVar8 = plVar8 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)PTR_DAT_10a8_0000_10a8_003a);
  }
  if (((param_3 & 2) != 0) && (uVar11 = 0, 0 < (int)PTR_DAT_10a8_0000_10a8_83c6)) {
    local_10 = _PTR_DAT_10a8_0000_10a8_006e;
    do {
      uVar3 = *local_10;
      local_8 = *(uint *)((int)local_10 + 2);
      if ((local_8 | uVar3) == 0) break;
      local_c = param_2 - *(int *)(uVar3 + 10);
      iVar10 = param_1 - *(int *)(uVar3 + 8);
      local_6 = (long)iVar10 * (long)iVar10;
      if (local_6 - local_14 == 0 || local_6 < local_14) {
        local_6 = local_6 + (long)local_c * (long)local_c;
        if (local_6 <= local_14) {
          if (((((uint)local_6 == (int)local_14) &&
               (local_6._2_2_ = (uint)((ulong)local_6 >> 0x10), local_6._2_2_ == local_14._2_2_)) &&
              ((local_22 & 1) == 0)) || (*(long *)(uVar3 + 8) == local_26)) {
            if (((local_22 & 0x20000) == 0) ||
               ((uVar4 = *(undefined4 *)(PTR_DAT_10a8_0000_10a8_006e + (int)local_1c * 4),
                (undefined *)*(int *)((int)uVar4 + 2) != PTR_DAT_10a8_0001_10a8_00c0 &&
                ((undefined *)*(int *)(uVar3 + 2) == PTR_DAT_10a8_0001_10a8_00c0)))) {
              local_1c = local_1c & 0xffff0000 | (ulong)uVar11;
              local_22 = local_22 | 0x20000;
              if ((int)local_22 == 0) goto LAB_1010_1a94;
            }
          }
          else if (local_6 < local_14) {
            local_14 = local_6;
LAB_1010_1a94:
            local_26 = *(long *)(uVar3 + 8);
            local_1c = local_1c & 0xffff0000 | (ulong)uVar11;
            local_1e = -1;
            local_22 = 0x20002;
          }
        }
      }
      local_10 = (uint *)((ulong)local_10 & 0xffff0000 | (ulong)((int)local_10 + 4));
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)PTR_DAT_10a8_0000_10a8_83c6);
  }
  if ((((param_3 & 4) != 0) && (PTR_DAT_10a8_0000_10a8_7b4c == (undefined *)&DAT_10a8_0002)) &&
     (puVar9 = PTR_DAT_10a8_0000_10a8_7bc4 + -1, -1 < (int)puVar9)) {
    plVar8 = (long *)(PTR_DAT_10a8_0000_10a8_7bc6 + (int)puVar9 * 0x12 + 4);
    local_a = plVar8;
    do {
      local_18 = *plVar8;
      local_c = param_2 - *(int *)((int)plVar8 + 2);
      local_6 = (long)(param_1 - (int)local_18) * (long)(param_1 - (int)local_18);
      if (local_6 - local_14 == 0 || local_6 < local_14) {
        local_6 = local_6 + (long)local_c * (long)local_c;
        if (local_6 <= local_14) {
          if (((((uint)local_6 == (int)local_14) &&
               (local_6._2_2_ = (uint)((ulong)local_6 >> 0x10), local_6._2_2_ == local_14._2_2_)) &&
              ((local_22 & 3) == 0)) || (local_26 == local_18)) {
            if (((local_22 & 0x40000) == 0) || (PTR_DAT_10a8_0000_10a8_7b60 == puVar9)) {
              local_1c = local_1c & 0xffff | ZEXT24(puVar9) << 0x10;
              local_22 = local_22 | 0x40000;
              if ((int)local_22 == 0) goto LAB_1010_1b87;
            }
          }
          else if (local_6 < local_14) {
            local_14 = local_6;
LAB_1010_1b87:
            local_26 = local_18;
            local_1e = -1;
            local_1c = CONCAT22(puVar9,0xffff);
            local_22 = 0x40004;
          }
        }
      }
      plVar8 = (long *)((int)plVar8 + -0x12);
      puVar9 = puVar9 + -1;
    } while (-1 < (int)puVar9);
  }
  if (((param_3 & 0x20) == 0) && ((int)local_22 != 0)) {
    uVar5 = CONCAT22(local_34,~param_3) & 0xffff0007;
    bVar6 = FUN_1010_18d2((int)local_26,(int)((ulong)local_26 >> 0x10),(uint)uVar5 | 0xa0,
                          (long *)(uVar5 >> 0x10));
    if ((int)CONCAT31(extraout_var,bVar6) != 0) {
      if (local_2c != -1) {
        local_1e = local_2c;
      }
      if (local_2a != 0xffff) {
        local_1c = local_1c & 0xffff0000 | (ulong)local_2a;
      }
      if (local_28 != 0xffff) {
        local_1c = local_1c & 0xffff | (ulong)local_28 << 0x10;
      }
      local_22 = local_22 & 0xffff | (ulong)(local_22._2_2_ | local_2e) << 0x10;
    }
  }
  if (param_4 != (long *)0x0) {
    plVar8 = &local_26;
    for (iVar10 = 3; iVar10 != 0; iVar10 = iVar10 + -1) {
      plVar2 = param_4;
      param_4 = param_4 + 1;
      plVar1 = plVar8;
      plVar8 = plVar8 + 1;
      *plVar2 = *plVar1;
    }
    *(undefined2 *)param_4 = *(undefined2 *)plVar8;
  }
  return (bool)('\x01' - ((int)local_22 == 0));
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl16far FUN_1010_1c24(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined2 uVar9;
  bool bVar10;
  uint local_30 [6];
  uint local_24 [3];
  uint local_1e;
  undefined4 local_1c;
  int local_18;
  undefined4 local_16;
  int local_12;
  int local_10;
  undefined2 local_e;
  uint local_c;
  int local_a;
  uint local_8;
  int local_6;
  uint *local_4;

  iVar5 = (int)&PTR_DAT_10a8_0000_10a8_2eae + *param_1 * 0x93;
  local_16 = (int *)CONCAT22(0x10a8,iVar5);
  FUN_1010_239a((int)PTR_DAT_10a8_0001_10a8_00c0,iVar5,(int)s_From___s_c_c_10a8_10a2 + 6,local_24);
  puVar7 = local_24;
  puVar6 = local_30;
  local_4 = puVar6;
  do {
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar6 = *puVar1;
    puVar6[1] = 0;
    puVar6 = puVar6 + 2;
  } while (puVar6 < local_24);
  local_8 = local_1e;
  local_6 = 0;
  uVar9 = (undefined2)((ulong)local_16 >> 0x10);
  local_c = *(uint *)((int)local_16 + 0x28);
  local_a = 0;
  *(undefined2 *)((int)param_1 + 0x38) = *(undefined2 *)((int)local_16 + 0x38);
  local_16 = param_1;
  local_12 = 0;
  if (*(char *)((int)param_1 + 0x7a) != '\0') {
    iVar5 = (int)param_1 + 0x3c;
    local_e = param_1._2_2_;
    local_10 = iVar5;
    do {
      if (*(char *)(iVar5 + 1) != '\0') {
        local_1c = *(undefined4 *)(iVar5 + -2);
        FUN_1060_32b2((uint *)&local_1c);
        FUN_1010_239a((int)PTR_DAT_10a8_0001_10a8_00c0,local_18,(int)s_From___s_c_c_10a8_10a2 + 6,
                      local_24);
        uVar9 = local_e;
        puVar7 = local_30;
        local_4 = puVar7;
        local_10 = iVar5;
        puVar6 = local_24;
        do {
          uVar4 = (uint)*(byte *)(local_10 + 1) * *puVar6;
          puVar1 = puVar7;
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + uVar4;
          puVar1 = puVar7 + 1;
          *puVar1 = *puVar1 + (uint)CARRY2(uVar3,uVar4);
          puVar7 = puVar7 + 2;
          puVar6 = puVar6 + 1;
        } while (puVar7 < local_24);
        uVar3 = (uint)*(byte *)(local_10 + 1);
        uVar4 = uVar3 * local_1e;
        bVar10 = CARRY2(local_8,uVar4);
        local_8 = local_8 + uVar4;
        local_6 = local_6 + (uint)bVar10;
        uVar3 = uVar3 * *(int *)(local_18 + 0x28);
        bVar10 = CARRY2(local_c,uVar3);
        local_c = local_c + uVar3;
        local_a = local_a + (uint)bVar10;
        iVar5 = local_10;
        if (*(int *)(local_10 + -2) == 8) {
          piVar2 = (int *)((int)local_16 + 0x38);
          *piVar2 = *piVar2 + (uint)*(byte *)(local_10 + 1) * *(int *)(local_18 + 0x34);
        }
      }
      iVar5 = iVar5 + 4;
      local_12 = local_12 + 1;
    } while (local_12 < (int)(uint)*(byte *)((int)local_16 + 0x7a));
  }
  puVar6 = (uint *)((int)local_16 + 0x2c);
  puVar7 = local_30;
  do {
    puVar8 = puVar7 + 2;
    *puVar6 = *puVar7;
    puVar6 = puVar6 + 1;
    puVar7 = puVar8;
  } while (puVar8 < local_24);
  *(uint *)((int)local_16 + 0x2a) = local_8;
  *(uint *)((int)local_16 + 0x28) = local_c;
  *(undefined4 *)((int)param_1 + 0x83) = 0xffffffff;
  return;
}



uint __cdecl16far FUN_1010_1dc4(ulong param_1)

{
  ulong uVar1;
  int iVar2;

  iVar2 = 0;
  uVar1 = param_1 & 0xffffe000;
  while (uVar1 != 0) {
    param_1 = param_1 >> 2;
    iVar2 = iVar2 + 1;
    uVar1 = param_1 & 0xffffe000;
  }
  return iVar2 << 0xd | (uint)param_1;
}



int __cdecl16far FUN_1010_1df4(int param_1,undefined2 param_2,int *param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_8;
  uint local_6;
  int local_4;

  puVar1 = PTR_DAT_10a8_0001_10a8_00c0;
  PTR_DAT_10a8_0001_10a8_00c0 = (undefined *)*(undefined2 *)(param_1 + 2);
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if ((*(ulong *)(param_1 + 0x1e) & 0x1f000) != 0x1f000) {
    local_8 = 0x8000;
    uVar3 = *(uint *)(param_1 + 0x1e);
    uVar6 = *(uint *)(param_1 + 0x20);
    uVar5 = uVar6 * 2 + (uint)CARRY2(uVar3,uVar3);
    uVar6 = (uint)(CARRY2(uVar6,uVar6) || CARRY2(uVar6 * 2,(uint)CARRY2(uVar3,uVar3)));
    uVar2 = uVar3 * 4 + uVar6;
    uVar3 = (uint)(CARRY2(uVar3 * 2,uVar3 * 2) || CARRY2(uVar3 * 4,uVar6));
    uVar6 = uVar5 * 2 + uVar3;
    uVar3 = (uint)(CARRY2(uVar5,uVar5) || CARRY2(uVar5 * 2,uVar3));
    bVar7 = CARRY2(uVar2,uVar2) || CARRY2(uVar2 * 2,uVar3);
    uVar3 = uVar2 * 2 + uVar3;
    local_6 = local_6 & 0xff00 |
              (byte)(((char)(uVar6 * 2) + bVar7) * '\x02' +
                    (CARRY2(uVar3,uVar3) ||
                    CARRY2(uVar3 * 2,(uint)(CARRY2(uVar6,uVar6) || CARRY2(uVar6 * 2,(uint)bVar7)))))
              & 0xff1f;
    iVar4 = FUN_1060_32b2(&local_8);
    if (iVar4 == 1) {
      if (param_3 != (int *)0x0) {
        iVar4 = *(int *)(local_4 + 0x34);
        if (iVar4 < 0) {
          *param_3 = -iVar4 >> 1;
        }
      }
      PTR_DAT_10a8_0001_10a8_00c0 = puVar1;
      uVar3 = *(uint *)(local_4 + 0x34);
      uVar6 = (int)uVar3 >> 0xf;
      return (uVar3 ^ uVar6) - uVar6;
    }
  }
  PTR_DAT_10a8_0001_10a8_00c0 = puVar1;
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined2 __cdecl16far FUN_1010_1e9a(int param_1,undefined2 param_2_00,undefined2 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  int local_1a;
  undefined4 local_14;
  uint local_a;

  local_14 = 0xffff;
  iVar6 = *(int *)(param_1 + 2) * 4;
  uVar1 = *(undefined2 *)(iVar6 + 0x74);
  pbVar3 = (byte *)(*(int *)(iVar6 + 0x72) + 0x7a);
  piVar7 = (int *)(param_1 + 0xc);
  local_1a = 0x10;
  do {
    if ((0 < *piVar7) && (*pbVar3 != 0)) {
      puVar8 = (uint *)(pbVar3 + -0x3e);
      local_a = (uint)*pbVar3;
      do {
        uVar2 = *puVar8;
        uVar4 = local_14._2_2_;
        if (((char)(uVar2 >> 8) != '\0') && (puVar8[-1] == 2)) {
          uVar2 = uVar2 & 0xff;
          iVar6 = uVar2 * 0x38;
          uVar5 = *(uint *)(iVar6 + 0x19e2);
          if ((int)uVar5 < (int)(uint)local_14) {
            uVar5 = (uint)local_14;
          }
          local_14 = (ulong)uVar5;
          iVar6 = *(int *)(iVar6 + 0x19e4);
          if (uVar2 == 5) {
            if (local_14._2_2_ < 0x32) {
              uVar4 = 0x32;
            }
          }
          else if (0 < iVar6) {
            if (iVar6 == 1) {
              uVar4 = 0x32;
            }
            else if (iVar6 == 2) {
              uVar4 = 100;
            }
            else {
              uVar4 = 200;
            }
            if (uVar4 < local_14._2_2_) {
              uVar4 = local_14._2_2_;
            }
          }
        }
        puVar8 = puVar8 + 2;
        local_a = local_a - 1;
        local_14._2_2_ = uVar4;
      } while (local_a != 0);
      local_14 = local_14 & 0xffff | (ulong)uVar4 << 0x10;
    }
    pbVar3 = pbVar3 + 0x87;
    piVar7 = piVar7 + 1;
    local_1a = local_1a + -1;
  } while (local_1a != 0);
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = local_14._2_2_;
  }
  return (uint)local_14;
}

