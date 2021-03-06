{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Nov 15 12:51:27 2016) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "c1",50,72,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0.4857143,-4.625384,6.438095,3.09473);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogy();
   c1->SetGridx();
   c1->SetGridy();
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.04);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.12);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *hframe__16 = new TH1F("hframe__16","",1000,1.2,6.2);
   hframe__16->SetMinimum(0.0002);
   hframe__16->SetMaximum(300);
   hframe__16->SetDirectory(0);
   hframe__16->SetStats(0);
   hframe__16->SetLineStyle(0);
   hframe__16->SetMarkerStyle(20);
   hframe__16->GetXaxis()->SetTitle("M_{q*} (TeV)");
   hframe__16->GetXaxis()->CenterTitle(true);
   hframe__16->GetXaxis()->SetNdivisions(508);
   hframe__16->GetXaxis()->SetLabelFont(42);
   hframe__16->GetXaxis()->SetLabelOffset(0.007);
   hframe__16->GetXaxis()->SetTitleSize(0.05);
   hframe__16->GetXaxis()->SetTitleOffset(1.05);
   hframe__16->GetXaxis()->SetTitleFont(42);
   hframe__16->GetYaxis()->SetTitle("#sigma_{95%} #times BR(q* #rightarrow qZ) [pb]");
   hframe__16->GetYaxis()->CenterTitle(true);
   hframe__16->GetYaxis()->SetLabelFont(42);
   hframe__16->GetYaxis()->SetLabelOffset(0.007);
   hframe__16->GetYaxis()->SetTitleSize(0.05);
   hframe__16->GetYaxis()->SetTitleOffset(1.15);
   hframe__16->GetYaxis()->SetTitleFont(42);
   hframe__16->GetZaxis()->SetLabelFont(42);
   hframe__16->GetZaxis()->SetLabelOffset(0.007);
   hframe__16->GetZaxis()->SetLabelSize(0.05);
   hframe__16->GetZaxis()->SetTitleSize(0.06);
   hframe__16->GetZaxis()->SetTitleFont(42);
   hframe__16->Draw(" ");
   
   TGraph *graph = new TGraph(102);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1.2,1.090228271);
   graph->SetPoint(1,1.3,0.7731323242);
   graph->SetPoint(2,1.4,0.5409606934);
   graph->SetPoint(3,1.5,0.4121032715);
   graph->SetPoint(4,1.6,0.3829650879);
   graph->SetPoint(5,1.7,0.3193389893);
   graph->SetPoint(6,1.8,0.2175567627);
   graph->SetPoint(7,1.9,0.2059295654);
   graph->SetPoint(8,2,0.1695404053);
   graph->SetPoint(9,2.1,0.1457138062);
   graph->SetPoint(10,2.2,0.1161605835);
   graph->SetPoint(11,2.3,0.0941116333);
   graph->SetPoint(12,2.4,0.07703018188);
   graph->SetPoint(13,2.5,0.06600036621);
   graph->SetPoint(14,2.6,0.05805587769);
   graph->SetPoint(15,2.7,0.05074691772);
   graph->SetPoint(16,2.8,0.04508590698);
   graph->SetPoint(17,2.9,0.04013252258);
   graph->SetPoint(18,3,0.0373626709);
   graph->SetPoint(19,3.1,0.03260612488);
   graph->SetPoint(20,3.2,0.02921485901);
   graph->SetPoint(21,3.3,0.02558326721);
   graph->SetPoint(22,3.4,0.02339744568);
   graph->SetPoint(23,3.5,0.02096824646);
   graph->SetPoint(24,3.6,0.01810073853);
   graph->SetPoint(25,3.7,0.01635150909);
   graph->SetPoint(26,3.8,0.01502895355);
   graph->SetPoint(27,3.9,0.01348018646);
   graph->SetPoint(28,4,0.01220798492);
   graph->SetPoint(29,4.1,0.01143665314);
   graph->SetPoint(30,4.2,0.01086750031);
   graph->SetPoint(31,4.3,0.009311580658);
   graph->SetPoint(32,4.4,0.00845375061);
   graph->SetPoint(33,4.5,0.007253551483);
   graph->SetPoint(34,4.6,0.006929111481);
   graph->SetPoint(35,4.7,0.006131267548);
   graph->SetPoint(36,4.8,0.005629825592);
   graph->SetPoint(37,4.9,0.005311489105);
   graph->SetPoint(38,5,0.004997730255);
   graph->SetPoint(39,5.1,0.004868602753);
   graph->SetPoint(40,5.2,0.004824542999);
   graph->SetPoint(41,5.3,0.005477046967);
   graph->SetPoint(42,5.4,0.005217266083);
   graph->SetPoint(43,5.5,0.004870891571);
   graph->SetPoint(44,5.6,0.005949211121);
   graph->SetPoint(45,5.7,0.004236316681);
   graph->SetPoint(46,5.8,0.003507757187);
   graph->SetPoint(47,5.9,0.003618955612);
   graph->SetPoint(48,6,0.003829050064);
   graph->SetPoint(49,6.1,0.00480928421);
   graph->SetPoint(50,6.2,0.005879878998);
   graph->SetPoint(51,6.2,0.038738873);
   graph->SetPoint(52,6.1,0.03167869091);
   graph->SetPoint(53,6,0.02494953394);
   graph->SetPoint(54,5.9,0.02315995216);
   graph->SetPoint(55,5.8,0.02186771393);
   graph->SetPoint(56,5.7,0.02567244768);
   graph->SetPoint(57,5.6,0.0355912447);
   graph->SetPoint(58,5.5,0.02819999456);
   graph->SetPoint(59,5.4,0.02994587898);
   graph->SetPoint(60,5.3,0.03136771441);
   graph->SetPoint(61,5.2,0.02691386223);
   graph->SetPoint(62,5.1,0.02685317993);
   graph->SetPoint(63,5,0.02685069799);
   graph->SetPoint(64,4.9,0.0279154706);
   graph->SetPoint(65,4.8,0.02877485037);
   graph->SetPoint(66,4.7,0.03093939781);
   graph->SetPoint(67,4.6,0.03391000986);
   graph->SetPoint(68,4.5,0.03508037567);
   graph->SetPoint(69,4.4,0.03962581873);
   graph->SetPoint(70,4.3,0.04307482243);
   graph->SetPoint(71,4.2,0.04956274986);
   graph->SetPoint(72,4.1,0.05147008896);
   graph->SetPoint(73,4,0.05411206245);
   graph->SetPoint(74,3.9,0.05884622574);
   graph->SetPoint(75,3.8,0.06575809479);
   graph->SetPoint(76,3.7,0.06990438938);
   graph->SetPoint(77,3.6,0.07648993969);
   graph->SetPoint(78,3.5,0.08827805519);
   graph->SetPoint(79,3.4,0.09772205353);
   graph->SetPoint(80,3.3,0.1057340622);
   graph->SetPoint(81,3.2,0.1194865417);
   graph->SetPoint(82,3.1,0.1335938263);
   graph->SetPoint(83,3,0.1509161663);
   graph->SetPoint(84,2.9,0.1609129906);
   graph->SetPoint(85,2.8,0.1803479004);
   graph->SetPoint(86,2.7,0.2023863983);
   graph->SetPoint(87,2.6,0.2304894638);
   graph->SetPoint(88,2.5,0.2614113426);
   graph->SetPoint(89,2.4,0.3037019157);
   graph->SetPoint(90,2.3,0.3673636627);
   graph->SetPoint(91,2.2,0.4511687469);
   graph->SetPoint(92,2.1,0.5562114716);
   graph->SetPoint(93,2,0.6440309143);
   graph->SetPoint(94,1.9,0.7871203613);
   graph->SetPoint(95,1.8,0.8544399261);
   graph->SetPoint(96,1.7,1.237268066);
   graph->SetPoint(97,1.6,1.520421753);
   graph->SetPoint(98,1.5,1.614242554);
   graph->SetPoint(99,1.4,2.206389008);
   graph->SetPoint(100,1.3,3.198614197);
   graph->SetPoint(101,1.2,4.364286804);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",102,0.7,6.7);
   Graph_Graph11->SetMinimum(0.003156981);
   Graph_Graph11->SetMaximum(4.800365);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);
   Graph_Graph11->SetLineStyle(0);
   Graph_Graph11->SetMarkerStyle(20);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw("f");
   
   graph = new TGraph(102);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1.2,1.469284821);
   graph->SetPoint(1,1.3,1.043363953);
   graph->SetPoint(2,1.4,0.7350229645);
   graph->SetPoint(3,1.5,0.554613533);
   graph->SetPoint(4,1.6,0.5216072845);
   graph->SetPoint(5,1.7,0.4263896942);
   graph->SetPoint(6,1.8,0.2916384888);
   graph->SetPoint(7,1.9,0.2738890457);
   graph->SetPoint(8,2,0.2278467941);
   graph->SetPoint(9,2.1,0.1945608521);
   graph->SetPoint(10,2.2,0.1559204197);
   graph->SetPoint(11,2.3,0.1268328857);
   graph->SetPoint(12,2.4,0.1047957897);
   graph->SetPoint(13,2.5,0.08894773483);
   graph->SetPoint(14,2.6,0.07844915867);
   graph->SetPoint(15,2.7,0.06866916656);
   graph->SetPoint(16,2.8,0.06100886345);
   graph->SetPoint(17,2.9,0.05430609226);
   graph->SetPoint(18,3,0.05038742065);
   graph->SetPoint(19,3.1,0.04430312634);
   graph->SetPoint(20,3.2,0.039319911);
   graph->SetPoint(21,3.3,0.03457168579);
   graph->SetPoint(22,3.4,0.03174742222);
   graph->SetPoint(23,3.5,0.0283352232);
   graph->SetPoint(24,3.6,0.02461112976);
   graph->SetPoint(25,3.7,0.02227888107);
   graph->SetPoint(26,3.8,0.0206498456);
   graph->SetPoint(27,3.9,0.01839142323);
   graph->SetPoint(28,4,0.01667770028);
   graph->SetPoint(29,4.1,0.01568990588);
   graph->SetPoint(30,4.2,0.01497274876);
   graph->SetPoint(31,4.3,0.01282907367);
   graph->SetPoint(32,4.4,0.01169751167);
   graph->SetPoint(33,4.5,0.010170573);
   graph->SetPoint(34,4.6,0.009715659618);
   graph->SetPoint(35,4.7,0.008702864647);
   graph->SetPoint(36,4.8,0.007965986133);
   graph->SetPoint(37,4.9,0.007585911751);
   graph->SetPoint(38,5,0.007137798667);
   graph->SetPoint(39,5.1,0.00697383523);
   graph->SetPoint(40,5.2,0.006956573725);
   graph->SetPoint(41,5.3,0.007921416759);
   graph->SetPoint(42,5.4,0.007545697093);
   graph->SetPoint(43,5.5,0.007044737935);
   graph->SetPoint(44,5.6,0.008711733818);
   graph->SetPoint(45,5.7,0.006219170094);
   graph->SetPoint(46,5.8,0.00516559422);
   graph->SetPoint(47,5.9,0.005356961489);
   graph->SetPoint(48,6,0.005697720051);
   graph->SetPoint(49,6.1,0.007194427848);
   graph->SetPoint(50,6.2,0.008776848912);
   graph->SetPoint(51,6.2,0.02416504145);
   graph->SetPoint(52,6.1,0.0197638464);
   graph->SetPoint(53,6,0.01544105172);
   graph->SetPoint(54,5.9,0.01438936234);
   graph->SetPoint(55,5.8,0.01375270009);
   graph->SetPoint(56,5.7,0.01615202785);
   graph->SetPoint(57,5.6,0.02258069515);
   graph->SetPoint(58,5.5,0.0179054606);
   graph->SetPoint(59,5.4,0.0191787374);
   graph->SetPoint(60,5.3,0.01993672848);
   graph->SetPoint(61,5.2,0.0172574842);
   graph->SetPoint(62,5.1,0.01724303365);
   graph->SetPoint(63,5,0.01739907861);
   graph->SetPoint(64,4.9,0.01826076031);
   graph->SetPoint(65,4.8,0.01893510818);
   graph->SetPoint(66,4.7,0.0204122138);
   graph->SetPoint(67,4.6,0.02257227898);
   graph->SetPoint(68,4.5,0.02350733519);
   graph->SetPoint(69,4.4,0.0265982008);
   graph->SetPoint(70,4.3,0.02906376362);
   graph->SetPoint(71,4.2,0.03356672764);
   graph->SetPoint(72,4.1,0.03504543781);
   graph->SetPoint(73,4,0.03692022324);
   graph->SetPoint(74,3.9,0.04023634911);
   graph->SetPoint(75,3.8,0.04521102428);
   graph->SetPoint(76,3.7,0.04817224026);
   graph->SetPoint(77,3.6,0.05283628941);
   graph->SetPoint(78,3.5,0.06083383083);
   graph->SetPoint(79,3.4,0.06766985893);
   graph->SetPoint(80,3.3,0.07342899799);
   graph->SetPoint(81,3.2,0.0832195282);
   graph->SetPoint(82,3.1,0.09358597755);
   graph->SetPoint(83,3,0.1056766605);
   graph->SetPoint(84,2.9,0.1137007236);
   graph->SetPoint(85,2.8,0.1270398712);
   graph->SetPoint(86,2.7,0.142991066);
   graph->SetPoint(87,2.6,0.1623603821);
   graph->SetPoint(88,2.5,0.1835691452);
   graph->SetPoint(89,2.4,0.2158637047);
   graph->SetPoint(90,2.3,0.2603172874);
   graph->SetPoint(91,2.2,0.3206794357);
   graph->SetPoint(92,2.1,0.3978437042);
   graph->SetPoint(93,2,0.4620350266);
   graph->SetPoint(94,1.9,0.5612034988);
   graph->SetPoint(95,1.8,0.6017724228);
   graph->SetPoint(96,1.7,0.8767395782);
   graph->SetPoint(97,1.6,1.071008759);
   graph->SetPoint(98,1.5,1.143928528);
   graph->SetPoint(99,1.4,1.535872192);
   graph->SetPoint(100,1.3,2.202294006);
   graph->SetPoint(101,1.2,3.065623474);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",102,0.7,6.7);
   Graph_Graph12->SetMinimum(0.004649035);
   Graph_Graph12->SetMaximum(3.371669);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);
   Graph_Graph12->SetLineStyle(0);
   Graph_Graph12->SetMarkerStyle(20);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   graph->Draw("f");
   
   TGraphErrors *gre = new TGraphErrors(51);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1.2,2.090625);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.3,1.49375);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.4,1.053125);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.5,0.784375);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.6,0.734375);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,1.7,0.6078125);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,1.8,0.4171875);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,1.9,0.3890625);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,2,0.3203125);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2.1,0.2773438);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,2.2,0.2210938);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,2.3,0.1804688);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,2.4,0.1488281);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,2.5,0.1265625);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,2.6,0.1113281);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,2.7,0.09804688);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,2.8,0.08710938);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,2.9,0.07753906);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,3,0.07246094);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,3.1,0.06347656);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,3.2,0.05644531);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,3.3,0.04980469);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,3.4,0.04589844);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,3.5,0.04082031);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,3.6,0.03564453);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,3.7,0.03232422);
   gre->SetPointError(25,0,0);
   gre->SetPoint(26,3.8,0.03017578);
   gre->SetPointError(26,0,0);
   gre->SetPoint(27,3.9,0.02685547);
   gre->SetPointError(27,0,0);
   gre->SetPoint(28,4,0.02451172);
   gre->SetPointError(28,0,0);
   gre->SetPoint(29,4.1,0.02314453);
   gre->SetPointError(29,0,0);
   gre->SetPoint(30,4.2,0.02216797);
   gre->SetPointError(30,0,0);
   gre->SetPoint(31,4.3,0.01899414);
   gre->SetPointError(31,0,0);
   gre->SetPoint(32,4.4,0.01738281);
   gre->SetPointError(32,0,0);
   gre->SetPoint(33,4.5,0.0152832);
   gre->SetPointError(33,0,0);
   gre->SetPoint(34,4.6,0.01459961);
   gre->SetPointError(34,0,0);
   gre->SetPoint(35,4.7,0.01313477);
   gre->SetPointError(35,0,0);
   gre->SetPoint(36,4.8,0.01206055);
   gre->SetPointError(36,0,0);
   gre->SetPoint(37,4.9,0.01157227);
   gre->SetPointError(37,0,0);
   gre->SetPoint(38,5,0.01088867);
   gre->SetPointError(38,0,0);
   gre->SetPoint(39,5.1,0.01079102);
   gre->SetPointError(39,0,0);
   gre->SetPoint(40,5.2,0.01069336);
   gre->SetPointError(40,0,0);
   gre->SetPoint(41,5.3,0.01235352);
   gre->SetPointError(41,0,0);
   gre->SetPoint(42,5.4,0.01176758);
   gre->SetPointError(42,0,0);
   gre->SetPoint(43,5.5,0.01098633);
   gre->SetPointError(43,0,0);
   gre->SetPoint(44,5.6,0.0137207);
   gre->SetPointError(44,0,0);
   gre->SetPoint(45,5.7,0.009814453);
   gre->SetPointError(45,0,0);
   gre->SetPoint(46,5.8,0.008276367);
   gre->SetPointError(46,0,0);
   gre->SetPoint(47,5.9,0.008618164);
   gre->SetPointError(47,0,0);
   gre->SetPoint(48,6,0.009204102);
   gre->SetPointError(48,0,0);
   gre->SetPoint(49,6.1,0.01166992);
   gre->SetPointError(49,0,0);
   gre->SetPoint(50,6.2,0.0144043);
   gre->SetPointError(50,0,0);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","Graph",100,0.7,6.7);
   Graph_Graph16->SetMinimum(0.00744873);
   Graph_Graph16->SetMaximum(2.29886);
   Graph_Graph16->SetDirectory(0);
   Graph_Graph16->SetStats(0);
   Graph_Graph16->SetLineStyle(0);
   Graph_Graph16->SetMarkerStyle(20);
   Graph_Graph16->GetXaxis()->SetLabelFont(42);
   Graph_Graph16->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph16->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph16->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph16->GetXaxis()->SetTitleFont(42);
   Graph_Graph16->GetYaxis()->SetLabelFont(42);
   Graph_Graph16->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph16->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph16->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph16->GetYaxis()->SetTitleFont(42);
   Graph_Graph16->GetZaxis()->SetLabelFont(42);
   Graph_Graph16->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph16->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph16->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph16);
   
   gre->Draw("l");
   
   gre = new TGraphErrors(51);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(0.8);
   gre->SetPoint(0,1.2,1.570609);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.3,1.747057);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.4,1.50884);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.5,1.057324);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.6,0.6948794);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,1.7,0.6296153);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,1.8,0.572074);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,1.9,0.4563233);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,2,0.2651265);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2.1,0.1961838);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,2.2,0.1622988);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,2.3,0.149206);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,2.4,0.1602034);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,2.5,0.1649402);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,2.6,0.150486);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,2.7,0.1094544);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,2.8,0.06708255);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,2.9,0.04938724);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,3,0.04724935);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,3.1,0.0495228);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,3.2,0.05096603);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,3.3,0.05638972);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,3.4,0.06055441);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,3.5,0.05861183);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,3.6,0.04930991);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,3.7,0.03611997);
   gre->SetPointError(25,0,0);
   gre->SetPoint(26,3.8,0.0262277);
   gre->SetPointError(26,0,0);
   gre->SetPoint(27,3.9,0.02229758);
   gre->SetPointError(27,0,0);
   gre->SetPoint(28,4,0.01958344);
   gre->SetPointError(28,0,0);
   gre->SetPoint(29,4.1,0.01859028);
   gre->SetPointError(29,0,0);
   gre->SetPoint(30,4.2,0.01762446);
   gre->SetPointError(30,0,0);
   gre->SetPoint(31,4.3,0.01607999);
   gre->SetPointError(31,0,0);
   gre->SetPoint(32,4.4,0.01408056);
   gre->SetPointError(32,0,0);
   gre->SetPoint(33,4.5,0.01032001);
   gre->SetPointError(33,0,0);
   gre->SetPoint(34,4.6,0.009506064);
   gre->SetPointError(34,0,0);
   gre->SetPoint(35,4.7,0.008924085);
   gre->SetPointError(35,0,0);
   gre->SetPoint(36,4.8,0.01001762);
   gre->SetPointError(36,0,0);
   gre->SetPoint(37,4.9,0.01243769);
   gre->SetPointError(37,0,0);
   gre->SetPoint(38,5,0.01352886);
   gre->SetPointError(38,0,0);
   gre->SetPoint(39,5.1,0.01426528);
   gre->SetPointError(39,0,0);
   gre->SetPoint(40,5.2,0.01488683);
   gre->SetPointError(40,0,0);
   gre->SetPoint(41,5.3,0.01816134);
   gre->SetPointError(41,0,0);
   gre->SetPoint(42,5.4,0.01789354);
   gre->SetPointError(42,0,0);
   gre->SetPoint(43,5.5,0.01728625);
   gre->SetPointError(43,0,0);
   gre->SetPoint(44,5.6,0.02205273);
   gre->SetPointError(44,0,0);
   gre->SetPoint(45,5.7,0.0157019);
   gre->SetPointError(45,0,0);
   gre->SetPoint(46,5.8,0.01350969);
   gre->SetPointError(46,0,0);
   gre->SetPoint(47,5.9,0.0142683);
   gre->SetPointError(47,0,0);
   gre->SetPoint(48,6,0.01523692);
   gre->SetPointError(48,0,0);
   gre->SetPoint(49,6.1,0.01904942);
   gre->SetPointError(49,0,0);
   gre->SetPoint(50,6.2,0.02282485);
   gre->SetPointError(50,0,0);
   
   TH1F *Graph_Graph17 = new TH1F("Graph_Graph17","Graph",100,0.7,6.7);
   Graph_Graph17->SetMinimum(0.008031676);
   Graph_Graph17->SetMaximum(1.920871);
   Graph_Graph17->SetDirectory(0);
   Graph_Graph17->SetStats(0);
   Graph_Graph17->SetLineStyle(0);
   Graph_Graph17->SetMarkerStyle(20);
   Graph_Graph17->GetXaxis()->SetLabelFont(42);
   Graph_Graph17->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph17->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph17->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph17->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph17->GetXaxis()->SetTitleFont(42);
   Graph_Graph17->GetYaxis()->SetLabelFont(42);
   Graph_Graph17->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph17->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph17->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph17->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph17->GetYaxis()->SetTitleFont(42);
   Graph_Graph17->GetZaxis()->SetLabelFont(42);
   Graph_Graph17->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph17->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph17->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph17->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph17);
   
   gre->Draw("lp");
   
   gre = new TGraphErrors(17);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1,39.06);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.2,16.76);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.4,7.954);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.6,3.971);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.8,2.164);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,2,1.2);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,2.5,0.3168);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,3,0.0944);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,3.5,0.03035);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,4,0.01019);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,4.5,0.003495);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,5,0.00121);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,5.5,0.0004161);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,6,0.0001439);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,6.5,5.035e-05);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,7,1.772e-05);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,7.5,6.632e-06);
   gre->SetPointError(16,0,0);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","Graph",100,0.35,8.15);
   Graph_Graph18->SetMinimum(5.9688e-06);
   Graph_Graph18->SetMaximum(42.966);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);
   Graph_Graph18->SetLineStyle(0);
   Graph_Graph18->SetMarkerStyle(20);
   Graph_Graph18->GetXaxis()->SetLabelFont(42);
   Graph_Graph18->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph18->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph18->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph18->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph18->GetXaxis()->SetTitleFont(42);
   Graph_Graph18->GetYaxis()->SetLabelFont(42);
   Graph_Graph18->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph18->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph18->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph18->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph18->GetYaxis()->SetTitleFont(42);
   Graph_Graph18->GetZaxis()->SetLabelFont(42);
   Graph_Graph18->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph18->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph18->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph18->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph18);
   
   gre->Draw("l");
   
   TPaveText *pt = new TPaveText(0.7846309,0.5437063,0.825302,0.6363636,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   TText *text = pt->AddText("qW enriched");
   text = pt->AddText("High-purity");
   pt->Draw();
      tex = new TLatex(0.96,0.936,"12.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.892,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.82,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe__17 = new TH1F("hframe__17","",1000,1.2,6.2);
   hframe__17->SetMinimum(0.0002);
   hframe__17->SetMaximum(300);
   hframe__17->SetDirectory(0);
   hframe__17->SetStats(0);
   hframe__17->SetLineStyle(0);
   hframe__17->SetMarkerStyle(20);
   hframe__17->GetXaxis()->SetTitle("M_{q*} (TeV)");
   hframe__17->GetXaxis()->CenterTitle(true);
   hframe__17->GetXaxis()->SetNdivisions(508);
   hframe__17->GetXaxis()->SetLabelFont(42);
   hframe__17->GetXaxis()->SetLabelOffset(0.007);
   hframe__17->GetXaxis()->SetTitleSize(0.05);
   hframe__17->GetXaxis()->SetTitleOffset(1.05);
   hframe__17->GetXaxis()->SetTitleFont(42);
   hframe__17->GetYaxis()->SetTitle("#sigma_{95%} #times BR(q* #rightarrow qZ) [pb]");
   hframe__17->GetYaxis()->CenterTitle(true);
   hframe__17->GetYaxis()->SetLabelFont(42);
   hframe__17->GetYaxis()->SetLabelOffset(0.007);
   hframe__17->GetYaxis()->SetTitleSize(0.05);
   hframe__17->GetYaxis()->SetTitleOffset(1.15);
   hframe__17->GetYaxis()->SetTitleFont(42);
   hframe__17->GetZaxis()->SetLabelFont(42);
   hframe__17->GetZaxis()->SetLabelOffset(0.007);
   hframe__17->GetZaxis()->SetLabelSize(0.05);
   hframe__17->GetZaxis()->SetTitleSize(0.06);
   hframe__17->GetZaxis()->SetTitleFont(42);
   hframe__17->Draw("sameaxis");
   
   TH1F *hframe__18 = new TH1F("hframe__18","",1000,1.2,6.2);
   hframe__18->SetMinimum(0.0002);
   hframe__18->SetMaximum(300);
   hframe__18->SetDirectory(0);
   hframe__18->SetStats(0);
   hframe__18->SetLineStyle(0);
   hframe__18->SetMarkerStyle(20);
   hframe__18->GetXaxis()->SetTitle("M_{q*} (TeV)");
   hframe__18->GetXaxis()->CenterTitle(true);
   hframe__18->GetXaxis()->SetNdivisions(508);
   hframe__18->GetXaxis()->SetLabelFont(42);
   hframe__18->GetXaxis()->SetLabelOffset(0.007);
   hframe__18->GetXaxis()->SetTitleSize(0.05);
   hframe__18->GetXaxis()->SetTitleOffset(1.05);
   hframe__18->GetXaxis()->SetTitleFont(42);
   hframe__18->GetYaxis()->SetTitle("#sigma_{95%} #times BR(q* #rightarrow qZ) [pb]");
   hframe__18->GetYaxis()->CenterTitle(true);
   hframe__18->GetYaxis()->SetLabelFont(42);
   hframe__18->GetYaxis()->SetLabelOffset(0.007);
   hframe__18->GetYaxis()->SetTitleSize(0.05);
   hframe__18->GetYaxis()->SetTitleOffset(1.15);
   hframe__18->GetYaxis()->SetTitleFont(42);
   hframe__18->GetZaxis()->SetLabelFont(42);
   hframe__18->GetZaxis()->SetLabelOffset(0.007);
   hframe__18->GetZaxis()->SetLabelSize(0.05);
   hframe__18->GetZaxis()->SetTitleSize(0.06);
   hframe__18->GetZaxis()->SetTitleFont(42);
   hframe__18->Draw("sameaxig");
   
   TLegend *leg = new TLegend(0.498995,0.6602591,0.9446734,0.9011917,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.028);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph3","Observed","Lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","Expected #pm 1 std. deviation","f");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","Expected #pm 2 std. deviation","f");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph4","#sigma_{TH}#timesBR(q*#rightarrowqZ)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   leg = new TLegend(0.498995,0.6602591,0.9446734,0.9011917,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.028);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("Graph3"," ","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2"," ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2"," ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph4"," ","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
