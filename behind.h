//  String P[20],MP1,MP2,MP3,MP4,MP5,MP6,MP7,MP8;
//  P[0] = digitalRead(dPIN1);
//  P[1] = digitalRead(dPIN2);
//  P[2] = digitalRead(dPIN3);
//  P[3] = digitalRead(dPIN4);
//  P[4] = digitalRead(dPIN5);
//  P[5] = digitalRead(dPIN6);
//  P[6] = digitalRead(dPIN7);
//  P[7] = digitalRead(dPIN8);
//  MP1="",MP2="",MP3="",MP4="",MP5="",MP6="",MP7="",MP8="";
//  MP1 = ReadEEPROM(AdEE_Status_PIN1_Start,AdEE_Status_PIN1_End,Dodai_id);
//  MP2 = ReadEEPROM(AdEE_Status_PIN2_Start,AdEE_Status_PIN2_End,Dodai_id);
//  MP3 = ReadEEPROM(AdEE_Status_PIN3_Start,AdEE_Status_PIN3_End,Dodai_id);
//  MP4 = ReadEEPROM(AdEE_Status_PIN4_Start,AdEE_Status_PIN4_End,Dodai_id);
//  MP5 = ReadEEPROM(AdEE_Status_PIN5_Start,AdEE_Status_PIN5_End,Dodai_id);
//  MP6 = ReadEEPROM(AdEE_Status_PIN6_Start,AdEE_Status_PIN6_End,Dodai_id);
//  MP7 = ReadEEPROM(AdEE_Status_PIN7_Start,AdEE_Status_PIN7_End,Dodai_id);
//  MP8 = ReadEEPROM(AdEE_Status_PIN8_Start,AdEE_Status_PIN8_End,Dodai_id);

// str_ssid = ReadEEPROM(AdEE_Name_Wifi_Start,AdEE_Name_Wifi_End,Dodai_id);
//  str_pass = ReadEEPROM(AdEE_Pass_Wifi_Start,AdEE_Pass_Wifi_End,Dodai_id);

//Save_user1 = "", Save_pass1 = "", Save_user2 ="", Save_pass2 ="",Save_user3 ="",Save_pass3="",Save_user4="", Save_pass4 ="",Save_user5 ="",Save_pass5 = "";
//      Save_user1 = ReadEEPROM(AdEE_User1_Start,AdEE_User1_End,Dodai_id);
//      Save_pass1 = ReadEEPROM(AdEE_Pass1_Start,AdEE_Pass1_End,Dodai_id);
//      Save_user2 = ReadEEPROM(AdEE_User2_Start,AdEE_User2_End,Dodai_id);
//      Save_pass2 = ReadEEPROM(AdEE_Pass2_Start,AdEE_Pass2_End,Dodai_id);
//      Save_user3 = ReadEEPROM(AdEE_User3_Start,AdEE_User3_End,Dodai_id);
//      Save_pass3 = ReadEEPROM(AdEE_Pass3_Start,AdEE_Pass3_End,Dodai_id);
//      Save_user4 = ReadEEPROM(AdEE_User4_Start,AdEE_User4_End,Dodai_id);
//      Save_pass4 = ReadEEPROM(AdEE_Pass4_Start,AdEE_Pass4_End,Dodai_id);
//      Save_user5 = ReadEEPROM(AdEE_User5_Start,AdEE_User5_End,Dodai_id);
//      Save_pass5 = ReadEEPROM(AdEE_Pass5_Start,AdEE_Pass5_End,Dodai_id);

     //ESP.reset();
     //while(Status1==true){Status1=Chong_Doi_D3();}


     //mdns.update ();// Listen for HTTP requests from clients
   //MDNS.update();
   
// Set your Static IP address
//  IPAddress local_IP(192, 168, 1, 187);
//  // Set your Gateway IP address
//  IPAddress gateway(192, 168, 1, 1);
//  
//  IPAddress subnet(255, 255, 255, 0);
//  IPAddress primaryDNS(8, 8, 8, 8);   //optional
//  IPAddress secondaryDNS(8, 8, 4, 4); //optional

//    if(MDNS.begin("esp8266")) { // Start the mDNS responder for esp8266.local
//  Serial.println("mDNS responder started");
//  } else {
//  Serial.println("Error setting up MDNS responder!");
//  }
 
  // Luu usermanerment vao EEPROM
//  WriteEEPROM_Acc(AdEE_User1_Start,AdEE_User1_End,user1);
//  WriteEEPROM_Acc(AdEE_Pass1_Start,AdEE_Pass1_End,pass1);
//  WriteEEPROM_Acc(AdEE_User2_Start,AdEE_User2_End,user2);
//  WriteEEPROM_Acc(AdEE_Pass2_Start,AdEE_Pass2_End,pass2);
//  WriteEEPROM_Acc(AdEE_User3_Start,AdEE_User3_End,user3);
//  WriteEEPROM_Acc(AdEE_Pass3_Start,AdEE_Pass3_End,pass3);
//  WriteEEPROM_Acc(AdEE_User4_Start,AdEE_User4_End,user4);
//  WriteEEPROM_Acc(AdEE_Pass4_Start,AdEE_Pass4_End,pass4);
//  WriteEEPROM_Acc(AdEE_User5_Start,AdEE_User5_End,user5);
//  WriteEEPROM_Acc(AdEE_Pass5_Start,AdEE_Pass5_End,pass5);

//  Luu vao EE phan name va Num
//    WriteEEPROM_Acc(AdEE_NameDevice_Start,AdEE_NameDevice_End,NameDevice);
//    EEPROM.write(AdEE_NumDevice,NumDevice); // NumDeive kieu int
//Serial.println("+++++++++++++++++++IP ++++++++");
//    delay(1000);
//    GlobalIPv4Add ="", GloablGateway ="",GlobalSunet="";
//    GlobalIPv4Add = WiFi.localIP().toString();
//    GloablGateway = WiFi.gatewayIP().toString();
//    GlobalSunet = WiFi.subnetMask().toString();
//    WriteEEPROM_Acc(AdEE_IPv4_Start,AdEE_IPv4_End,GlobalIPv4Add);
//    WriteEEPROM_Acc(AdEE_Gateway_Start,AdEE_Gateway_End,GloablGateway);
//    WriteEEPROM_Acc(AdEE_Sub_Start,AdEE_Sub_End,GlobalSunet);
//    
//    WriteEEPROM_iOneVal(AdEE_ServerPort_Start,serverPort);
//    Serial.print("Getway: ");
//    Serial.println(GloablGateway);
//    ////
//    KhoiTaolaiwifi();
//    // add them o day
//    Serial.println("khoi tao xong lan 1 phan config");
//    delay(1000);
//     KhoiTaolaiwifi();
//     Serial.println("khoi tao xong lan 2 phan config"); 

////////************

//if(int(EEPROM.read(AdEE_Status_Pin2))==1) 
//       setMode_PIN_2(1);
//     else setMode_PIN_2(0);

//ssidapp ="",passapp="";
//   ssidapp = ReadEEPROM(AdEE_AP_SSID_Start,AdEE_AP_SSID_End,Dodai_id);
//   passapp = ReadEEPROM(AdEE_AP_PASS_Start,AdEE_AP_PASS_End,Dodai_id);
//   Serial.print("SSID app: "); Serial.println(ssidapp);
//   Serial.print("PASS app: "); Serial.println(passapp);

// WriteEEPROM_Acc(AdEE_Status_PIN1_Start,AdEE_Status_PIN1_End,sStatu);
 
