<?php

include "Product.php";
include "Hardware.php";
include "Memory.php";

$memory_obj = new Memory();
$memory_obj->setBrand("Asus");
$memory_obj->setModel("RTX 3090 TI");
$memory_obj->setPrice("Rp. 1.000.000");
$memory_obj->setIdProduct("AR39");
$memory_obj->setFrequency("19.5 Gbps");
$memory_obj->setMemorySize("24GB");
$memory_obj->setSupportsCuda("yes");

echo "Brand         : ". $memory_obj->getBrand(). "<br/>";
echo "Model         : ". $memory_obj->getModel(). "<br/>";
echo "Price         : ". $memory_obj->getPrice(). "<br/>";
echo "Product ID    : ". $memory_obj->getIdProduct(). "<br/>";
echo "Frequency     : ". $memory_obj->getFrequency(). "<br/>";
echo "Memory Size   : ". $memory_obj->getMemorySize(). "<br/>";
echo "Supports Cuda : ". $memory_obj->getSupportsCuda(). "<br/>";

?>