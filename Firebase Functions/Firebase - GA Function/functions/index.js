const functions = require('firebase-functions');

// // Create and Deploy Your First Cloud Functions
// // https://firebase.google.com/docs/functions/write-firebase-functions
//
var admin = require('firebase-admin');
admin.initializeApp(functions.config().firebase);
var database=admin.database();
exports.doorFunction = functions.https.onRequest(async(request, response) => {
    let params = request.body.queryResult.parameters;
    console.log("params are ", params)
    await database.ref().update(params)
    response.send("Door Functions was invoked successfully...");
});