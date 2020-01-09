function operation(op)
{

    if(op === "C")
    {
        textField.text = " ";

    }else{

        if(op === "=")
        {
            textField.text = eval(textField.text);
        }else{


            textField.text = textField.text + op;


        }
    }
}
