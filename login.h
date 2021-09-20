const char Login[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="vn">
    <head>
        <meta charset="utf-8">
        <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">
        <link rel=\"icon\" href=\"data:,\">
    
    </head>
    <body onload="UpdateData_Login()" style="margin: 0;">
        <div class="top" style="margin-left: 30px; margin-top: 10px; width: 120px; height: 50px;">   
      <img src="/logo_anvgroup">  
    
        </div>
        <!-- lay dia chi IP ra -->
    <div class="tbody" style="background: url(/camera) no-repeat; margin-top: 50px; 
        background-color: #F2F2F2; height: 500px; background-position-x: center;"> 
      <div class="xbody">
      <div class="login_x" style="float: right; margin-right: 15%;">
        <form style="box-sizing: border-box; width: 260px; margin: 20px auto 0; box-shadow: 2px 2px 5px 1px rgba(0, 0, 0, 0.2); 
        padding-bottom: 20px; border-radius: 3px; background-color: #fff; text-align: center;">
        
          <br>
      <!-- the user ta lay ID o day -->
          <input id="login_user" placeholder="Username" type="text" required="" style="margin: 40px 25px;
          width: 200px;
          display: block;
          border: none;
          padding: 10px 0;
          border-bottom: solid 1px #1abc9c;
          transition: all 0.3s cubic-bezier(0.64, 0.09, 0.08, 1);
          background: linear-gradient(to bottom, rgba(255, 255, 255, 0) 96%, #1abc9c 4%);
          background-position: -200px 0;
          background-size: 200px 100%;
          background-repeat: no-repeat;
          color: #0e6252;">
      <!-- the Password ta lay o day -->
          <input id="login_pass" placeholder="Password" type="password" required="" style="margin: 40px 25px;
          width: 200px;
          display: block;
          border: none;
          padding: 10px 0;
          border-bottom: solid 1px #1abc9c;
          transition: all 0.3s cubic-bezier(0.64, 0.09, 0.08, 1);
          background: linear-gradient(to bottom, rgba(255, 255, 255, 0) 96%, #1abc9c 4%);
          background-position: -200px 0;
          background-size: 200px 100%;
          background-repeat: no-repeat;
          color: #0e6252;">
      
       <!-- the Password ta lay o day -->
          <button id="login_submit" style="border: none;
          background: #1abc9c;
          cursor: pointer;
          border-radius: 3px;
          padding: 6px;
          width: 200px;
          color: white;
          box-shadow: 0 3px 6px 0 rgba(0, 0, 0, 0.2);"
          onclick="giaodien()"
          >Submit</button>
        </form>
      </div>
        </div>
    </div>
         <!-- lay dia chi IP ra -->
        <div class="footer" style="background: url(/footer); width: 100%;  height: 120px; text-align: center; color: #fff; font-family: 'RobotoCondensed-Light'; font-size: 15px;">
           <br/>
            Copyright © ANVGroup | Control Center. All rights reserved
        </div>

        <script>
      var CheckOpen_LD = 0;
      var WB_LD_User1, WB_LD_Pass1, WB_LD_User2, WB_LD_Pass2, WB_LD_User3, WB_LD_Pass3, WB_LD_User4, WB_LD_Pass4, WB_LD_User5, WB_LD_Pass5;
      
      function UpdateData_Login()
      {
         var xhttp = new XMLHttpRequest();
         xhttp.onreadystatechange = function()
         {
          if(this.readyState == 4 && this.status == 200)
          {
             var DataVDK_LD = xhttp.responseText;
             if(DataVDK_LD) CheckOpen_LD = 1;
             console.log("Dữ liệu VDK: " + DataVDK_LD);
             try {
            var DataJsonLogin = JSON.parse(DataVDK_LD);
            
            if(DataJsonLogin.user1 != null && DataJsonLogin.pass1 != null)
            {
              if(DataJsonLogin.user1 != "" && DataJsonLogin.pass1 != "")
              {
                WB_LD_User1 = DataJsonLogin.user1;
                WB_LD_Pass1 = DataJsonLogin.pass1;
              }  
            }
            if(DataJsonLogin.user2 != null && DataJsonLogin.pass2 != null)
            {
              if(DataJsonLogin.user2 != "" && DataJsonLogin.pass2 != "")
              {
                WB_LD_User2 = DataJsonLogin.user2;
                WB_LD_Pass2 = DataJsonLogin.pass2;
              }  
            }
            
            if(DataJsonLogin.user3 != null && DataJsonLogin.pass3 != null)
            {
              if(DataJsonLogin.user3 != "" && DataJsonLogin.pass3 != "")
              {
                WB_LD_User3 = DataJsonLogin.user3;
                WB_LD_Pass3 = DataJsonLogin.pass3;
              }  
            }
            if(DataJsonLogin.user4 != null && DataJsonLogin.pass4 != null)
            {
              if(DataJsonLogin.user4 != "" && DataJsonLogin.pass4 != "")
              {
                WB_LD_User4 = DataJsonLogin.user4;
                WB_LD_Pass4 = DataJsonLogin.pass4;
              }  
            }
            if(DataJsonLogin.user5 != null && DataJsonLogin.pass5 != null)
            {
              if(DataJsonLogin.user5 != "" && DataJsonLogin.pass5 != "")
              {
                WB_LD_User5 = DataJsonLogin.user5;
                WB_LD_Pass5 = DataJsonLogin.pass5;
              }  
            }
               
            } catch (e) {
               console.log("Dữ liệu bị fale"); 
            }
             
          }
        }
        console.log("Du lieu checkOpen" + CheckOpen_LD);
        if(CheckOpen_LD == 0) {
          xhttp.open("GET", "/LLoadData/Login?CheckOpen_wb_LD=" + CheckOpen_LD, true); 
          xhttp.send();
          setTimeout(function(){ UpdateData_Login() }, 1000);
        }  
      }
  
      
        function giaodien(){
       
      var getDataUser = document.getElementById("login_user").value; 
      var getDataPass = document.getElementById("login_pass").value;
      if(getDataUser == WB_LD_User1 && getDataPass == WB_LD_Pass1)
      {
         console.log("da phan ung");
          event.preventDefault();
         location.href = "/api/control";
      }
      else if(getDataUser == WB_LD_User2 && getDataPass == WB_LD_Pass2)
      {
          event.preventDefault();
         location.href = "/api/control";
      }
      else if(getDataUser == WB_LD_User3 && getDataPass == WB_LD_Pass3)
      {
          event.preventDefault();
          location.href = "/api/control";
      }
      else if(getDataUser == WB_LD_User4 && getDataPass == WB_LD_Pass4)
      {
          event.preventDefault();
         location.href = "/api/control";
      }
      else if(getDataUser == WB_LD_User5 && getDataPass == WB_LD_Pass5)
      {
          event.preventDefault();
          location.href = "/api/control";
      }
      else {
        alert("you enter wrong user or password, can you try again!");
      }
      
             
        }
        </script>
    </body>
</html>

)=====";
