$(document).ready(function(){
    // Adding click event listener to the div with id red_header
    $('#red_header').click(function(){
        // Selecting the <header> element by tag name
        var headerElement = $('header');

        // Updating the text color to red
        headerElement.css('color', '#FF0000');
    });
});