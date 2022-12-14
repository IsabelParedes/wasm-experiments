Module["js_pub"] = function js_pub(msg, timer)
{
    // console.log("[JS] A message has been received.");
    console.log("[INFO] [" + timer.toFixed(4) + "] Message: " + msg)

    return msg
}