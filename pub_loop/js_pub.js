Module["js_pub"] = function js_pub(msg, timer)
{
    // console.log("[JS] A message has been received.");
    // let container = document.getElementById('pub_box');

    let p_msg = document.createElement('p');
    p_msg.innerHTML = "[INFO] [" + timer.toFixed(4) + "] Message: " + msg;
    document.getElementById('pub_box').appendChild(p_msg);

    // console.log("[INFO] [" + timer.toFixed(4) + "] Message: " + msg);
    Module.subscriber(msg);

    return msg
}

