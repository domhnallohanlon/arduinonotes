<!DOCTYPE html>
<html>
<title>Setting Up Your Arduino</title>

<!-- Mobile support -->
<meta name="viewport" content="width=device-width, initial-scale=1">

<!-- Twitter Bootstrap -->
<link href="https://cdnjs.cloudflare.com/ajax/libs/twitter-bootstrap/3.3.2/css/bootstrap.min.css" rel="stylesheet">

<!-- Material Design for Bootstrap -->
<link href="https://cdnjs.cloudflare.com/ajax/libs/bootstrap-material-design/0.2.2/css/material-wfont.css" rel="stylesheet">
<link href="https://cdnjs.cloudflare.com/ajax/libs/bootstrap-material-design/0.2.2/css/ripples.min.css" rel="stylesheet">

<!-- Dropdown.js -->
<link href="https://cdn.rawgit.com/FezVrasta/dropdown.js/master/jquery.dropdown.css" rel="stylesheet">

<!-- font awesome -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.3.0/css/font-awesome.min.css">

<!-- material design colours -->
<!-- production link -->
<!-- https://cdn.rawgit.com/domhnallohanlon/colours/master/colours.css -->

<!-- dev link -->
<link rel="stylesheet" type="text/css" href="https://rawgit.com/domhnallohanlon/colours/master/colours.css">
    
<!-- local copy  -->
<!-- <link rel="stylesheet" href="../colours/colours.css"> -->

<style>
    .img-responsive{
        display: block;
        margin: auto;
    }
</style>
</head>
<body>
<div class="navbar navbar-default navbar-fixed-top"> 
    <div class="navbar-header tealBG white">
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-responsive-collapse">
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
        </button>
        <a class="navbar-brand white" href="https://domhnallohanlon.github.io">Domhnall's Projects</a>
    </div>
    <div class="navbar-collapse collapse navbar-responsive-collapse  tealBG white">
        <ul class="nav navbar-nav" >
            <li><a href="https://twitter.com" target="_blank" class="white">Twitter</a></li>
            <li><a href="https://linkedin.com" target="_blank">LinkedIn</a></li>
        </ul>
        <form class="navbar-form navbar-left">
            <input type="text" class="form-control col-lg-8" placeholder="Search">
        </form>
</div>
</div> 
<xmp theme="superhero" style="display:none;" toc-top-link>


# Lecture 0: Setting up your Arduino

![Arduino Uno](img/uno.svg "Arduino Uno")

### Download the IDE
In order to program your board you'll need to get some software that allows you to upload, or flash, code to the Arduino. There are a number of different options available - some of which will be discussed later on - but for the moment let's get started using the official IDE (Integrated Development Environment) from the <a href="https://arduino.cc/download" target="_blank">Arduino Website</a>

### Blink

Since time immemorial (well...[(1974](http://en.wikipedia.org/wiki/%22Hello,_World!%22_program#History)) people have written a very simple "Hello World" program as their first foray into a new language. Since an Arduino doesn't have the means to display typed characters we'll have to make do with turning the an LED on and off. The _blink_ sketch is outlined below.

<code data-gist-id="733c75eac70f8a806015"></code>


### View Slides

To view a slide show of this guide <a href="00set_up_slides.html" target="_blank">click here.</a>



###Download Notes

To download the printable version of these notes click here
</xmp>

<script src="http://ndossougbe.github.io/strapdown/dist/strapdown.js"></script>

<script src="http://strapdownjs.com/v/0.2/strapdown.js"></script>

 </html>