const functions = require("firebase-functions");
const admin = require("firebase-admin");
admin.initializeApp();

exports.myPusherFunction = functions.database.ref('/lock').onWrite((data, context) => 
{
    admin.messaging().sendToTopic('lock', 
    {
        notification: {
            title: "Lock",
            body: "The door is now locked"
        }
    });
    
});