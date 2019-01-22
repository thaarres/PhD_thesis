void looseSel_Jet_1_tau_2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Sep  5 11:26:58 2018) by ROOT version6.02/05
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.02);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.13);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "newpad1",0,0,1,0.2);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(-0.1428571,-0.7000001,1.047619,1.8);
   c1_1->SetFillColor(0);
   c1_1->SetFillStyle(4000);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetGridx();
   c1_1->SetGridy();
   c1_1->SetTickx(1);
   c1_1->SetTicky(1);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetRightMargin(0.04);
   c1_1->SetTopMargin(0);
   c1_1->SetBottomMargin(0.36);
   c1_1->SetFrameFillStyle(4000);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameFillStyle(4000);
   c1_1->SetFrameBorderMode(0);
   
   TH1D *ratiohist5042154 = new TH1D("ratiohist5042154","",20,0,1);
   ratiohist5042154->SetBinContent(1,0.913363);
   ratiohist5042154->SetBinContent(2,0.9918234);
   ratiohist5042154->SetBinContent(3,1.057582);
   ratiohist5042154->SetBinContent(4,1.07008);
   ratiohist5042154->SetBinContent(5,1.109201);
   ratiohist5042154->SetBinContent(6,1.117569);
   ratiohist5042154->SetBinContent(7,0.8347838);
   ratiohist5042154->SetBinContent(8,1.030373);
   ratiohist5042154->SetBinContent(9,2.236354);
   ratiohist5042154->SetBinError(1,0.007358273);
   ratiohist5042154->SetBinError(2,0.00265618);
   ratiohist5042154->SetBinError(3,0.003579616);
   ratiohist5042154->SetBinError(4,0.00741723);
   ratiohist5042154->SetBinError(5,0.01770851);
   ratiohist5042154->SetBinError(6,0.04983193);
   ratiohist5042154->SetBinError(7,0.1790896);
   ratiohist5042154->SetBinError(8,0.3831805);
   ratiohist5042154->SetBinError(9,1.835512);
   ratiohist5042154->SetMinimum(0.2);
   ratiohist5042154->SetMaximum(1.8);
   ratiohist5042154->SetEntries(30.23235);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   ratiohist5042154->SetFillColor(ci);
   ratiohist5042154->SetLineWidth(2);
   ratiohist5042154->SetMarkerStyle(20);
   ratiohist5042154->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   ratiohist5042154->GetXaxis()->SetNdivisions(505);
   ratiohist5042154->GetXaxis()->SetLabelFont(42);
   ratiohist5042154->GetXaxis()->SetLabelSize(0.14);
   ratiohist5042154->GetXaxis()->SetTitleSize(0.17);
   ratiohist5042154->GetXaxis()->SetTitleOffset(0.98);
   ratiohist5042154->GetXaxis()->SetTitleFont(42);
   ratiohist5042154->GetYaxis()->SetTitle("Data/MC");
   ratiohist5042154->GetYaxis()->CenterTitle(true);
   ratiohist5042154->GetYaxis()->SetNdivisions(105);
   ratiohist5042154->GetYaxis()->SetLabelFont(42);
   ratiohist5042154->GetYaxis()->SetLabelSize(0.14);
   ratiohist5042154->GetYaxis()->SetTitleSize(0.16);
   ratiohist5042154->GetYaxis()->SetTitleOffset(0.2);
   ratiohist5042154->GetYaxis()->SetTitleFont(42);
   ratiohist5042154->GetZaxis()->SetLabelFont(42);
   ratiohist5042154->GetZaxis()->SetLabelSize(0.035);
   ratiohist5042154->GetZaxis()->SetTitleSize(0.035);
   ratiohist5042154->GetZaxis()->SetTitleFont(42);
   ratiohist5042154->Draw("");
   
   Double_t Graph0_fx1010[21] = {
   0,
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph0_fy1010[21] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_fex1010[21] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph0_fey1010[21] = {
   0.007906723,
   0.007906723,
   0.002523285,
   0.003128406,
   0.006532417,
   0.01526128,
   0.04324717,
   0.2121978,
   0.3544581,
   0.4167118,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3013);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","Graph",100,-0.1575,1.1325);
   Graph_Graph1010->SetMinimum(0.4999458);
   Graph_Graph1010->SetMaximum(1.500054);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);
   Graph_Graph1010->SetLineStyle(0);
   Graph_Graph1010->SetMarkerStyle(20);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
   gre->Draw("3");
   
   TH1D *H_ratiohist1564155 = new TH1D("H_ratiohist1564155","",20,0,1);
   H_ratiohist1564155->SetBinContent(1,0.8577913);
   H_ratiohist1564155->SetBinContent(2,1.056939);
   H_ratiohist1564155->SetBinContent(3,1.020304);
   H_ratiohist1564155->SetBinContent(4,0.9705568);
   H_ratiohist1564155->SetBinContent(5,0.9225235);
   H_ratiohist1564155->SetBinContent(6,1.018221);
   H_ratiohist1564155->SetBinContent(7,0.9154033);
   H_ratiohist1564155->SetBinContent(8,1.853818);
   H_ratiohist1564155->SetBinContent(9,2.236354);
   H_ratiohist1564155->SetBinError(1,0.006467593);
   H_ratiohist1564155->SetBinError(2,0.005165947);
   H_ratiohist1564155->SetBinError(3,0.007168961);
   H_ratiohist1564155->SetBinError(4,0.01355271);
   H_ratiohist1564155->SetBinError(5,0.02858189);
   H_ratiohist1564155->SetBinError(6,0.06334816);
   H_ratiohist1564155->SetBinError(7,0.2164519);
   H_ratiohist1564155->SetBinError(8,1.234396);
   H_ratiohist1564155->SetBinError(9,1.835512);
   H_ratiohist1564155->SetMinimum(0);
   H_ratiohist1564155->SetMaximum(2416823);
   H_ratiohist1564155->SetEntries(23.81561);

   ci = 962;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   H_ratiohist1564155->SetFillColor(ci);
   H_ratiohist1564155->SetLineStyle(9);
   H_ratiohist1564155->SetLineWidth(2);
   H_ratiohist1564155->SetMarkerStyle(20);
   H_ratiohist1564155->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   H_ratiohist1564155->GetXaxis()->SetLabelFont(42);
   H_ratiohist1564155->GetXaxis()->SetLabelSize(0);
   H_ratiohist1564155->GetXaxis()->SetTitleSize(0);
   H_ratiohist1564155->GetXaxis()->SetTitleFont(42);
   H_ratiohist1564155->GetYaxis()->SetTitle("Events");
   H_ratiohist1564155->GetYaxis()->SetLabelFont(42);
   H_ratiohist1564155->GetYaxis()->SetLabelSize(0.035);
   H_ratiohist1564155->GetYaxis()->SetTitleFont(42);
   H_ratiohist1564155->GetZaxis()->SetLabelFont(42);
   H_ratiohist1564155->GetZaxis()->SetLabelSize(0.035);
   H_ratiohist1564155->GetZaxis()->SetTitleSize(0.035);
   H_ratiohist1564155->GetZaxis()->SetTitleFont(42);
   H_ratiohist1564155->Draw("HISTsame");
   
   TH1D *MG_ratiohist2146156 = new TH1D("MG_ratiohist2146156","",20,0,1);
   MG_ratiohist2146156->SetBinContent(1,0.9939368);
   MG_ratiohist2146156->SetBinContent(2,1.01362);
   MG_ratiohist2146156->SetBinContent(3,0.993884);
   MG_ratiohist2146156->SetBinContent(4,0.95257);
   MG_ratiohist2146156->SetBinContent(5,0.9699324);
   MG_ratiohist2146156->SetBinContent(6,1.022851);
   MG_ratiohist2146156->SetBinContent(7,1.042923);
   MG_ratiohist2146156->SetBinContent(8,1.018225);
   MG_ratiohist2146156->SetBinContent(9,0.6209854);
   MG_ratiohist2146156->SetBinError(1,0.04510807);
   MG_ratiohist2146156->SetBinError(2,0.02288352);
   MG_ratiohist2146156->SetBinError(3,0.002267162);
   MG_ratiohist2146156->SetBinError(4,0.00390148);
   MG_ratiohist2146156->SetBinError(5,0.008248448);
   MG_ratiohist2146156->SetBinError(6,0.02107308);
   MG_ratiohist2146156->SetBinError(7,0.06244349);
   MG_ratiohist2146156->SetBinError(8,0.2250833);
   MG_ratiohist2146156->SetBinError(9,0.5985831);
   MG_ratiohist2146156->SetMinimum(0);
   MG_ratiohist2146156->SetMaximum(2416823);
   MG_ratiohist2146156->SetEntries(179.0062);

   ci = 963;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   MG_ratiohist2146156->SetFillColor(ci);
   MG_ratiohist2146156->SetLineStyle(2);
   MG_ratiohist2146156->SetLineWidth(2);
   MG_ratiohist2146156->SetMarkerStyle(20);
   MG_ratiohist2146156->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   MG_ratiohist2146156->GetXaxis()->SetLabelFont(42);
   MG_ratiohist2146156->GetXaxis()->SetLabelSize(0);
   MG_ratiohist2146156->GetXaxis()->SetTitleSize(0);
   MG_ratiohist2146156->GetXaxis()->SetTitleFont(42);
   MG_ratiohist2146156->GetYaxis()->SetTitle("Events");
   MG_ratiohist2146156->GetYaxis()->SetLabelFont(42);
   MG_ratiohist2146156->GetYaxis()->SetLabelSize(0.035);
   MG_ratiohist2146156->GetYaxis()->SetTitleFont(42);
   MG_ratiohist2146156->GetZaxis()->SetLabelFont(42);
   MG_ratiohist2146156->GetZaxis()->SetLabelSize(0.035);
   MG_ratiohist2146156->GetZaxis()->SetTitleSize(0.035);
   MG_ratiohist2146156->GetZaxis()->SetTitleFont(42);
   MG_ratiohist2146156->Draw("HISTsame");
   
   TH1D *ratiohist5042157 = new TH1D("ratiohist5042157","",20,0,1);
   ratiohist5042157->SetBinContent(1,0.913363);
   ratiohist5042157->SetBinContent(2,0.9918234);
   ratiohist5042157->SetBinContent(3,1.057582);
   ratiohist5042157->SetBinContent(4,1.07008);
   ratiohist5042157->SetBinContent(5,1.109201);
   ratiohist5042157->SetBinContent(6,1.117569);
   ratiohist5042157->SetBinContent(7,0.8347838);
   ratiohist5042157->SetBinContent(8,1.030373);
   ratiohist5042157->SetBinContent(9,2.236354);
   ratiohist5042157->SetBinError(1,0.007358273);
   ratiohist5042157->SetBinError(2,0.00265618);
   ratiohist5042157->SetBinError(3,0.003579616);
   ratiohist5042157->SetBinError(4,0.00741723);
   ratiohist5042157->SetBinError(5,0.01770851);
   ratiohist5042157->SetBinError(6,0.04983193);
   ratiohist5042157->SetBinError(7,0.1790896);
   ratiohist5042157->SetBinError(8,0.3831805);
   ratiohist5042157->SetBinError(9,1.835512);
   ratiohist5042157->SetMinimum(0.2);
   ratiohist5042157->SetMaximum(1.8);
   ratiohist5042157->SetEntries(30.23235);

   ci = TColor::GetColor("#ff9900");
   ratiohist5042157->SetFillColor(ci);
   ratiohist5042157->SetLineWidth(2);
   ratiohist5042157->SetMarkerStyle(20);
   ratiohist5042157->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   ratiohist5042157->GetXaxis()->SetNdivisions(505);
   ratiohist5042157->GetXaxis()->SetLabelFont(42);
   ratiohist5042157->GetXaxis()->SetLabelSize(0.14);
   ratiohist5042157->GetXaxis()->SetTitleSize(0.17);
   ratiohist5042157->GetXaxis()->SetTitleOffset(0.98);
   ratiohist5042157->GetXaxis()->SetTitleFont(42);
   ratiohist5042157->GetYaxis()->SetTitle("Data/MC");
   ratiohist5042157->GetYaxis()->CenterTitle(true);
   ratiohist5042157->GetYaxis()->SetNdivisions(105);
   ratiohist5042157->GetYaxis()->SetLabelFont(42);
   ratiohist5042157->GetYaxis()->SetLabelSize(0.14);
   ratiohist5042157->GetYaxis()->SetTitleSize(0.16);
   ratiohist5042157->GetYaxis()->SetTitleOffset(0.2);
   ratiohist5042157->GetYaxis()->SetTitleFont(42);
   ratiohist5042157->GetZaxis()->SetLabelFont(42);
   ratiohist5042157->GetZaxis()->SetLabelSize(0.035);
   ratiohist5042157->GetZaxis()->SetTitleSize(0.035);
   ratiohist5042157->GetZaxis()->SetTitleFont(42);
   ratiohist5042157->Draw("same");
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "newpad2",0,0.2,1,1);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.1428571,-36238.41,1.047619,2751331);
   c1_2->SetFillColor(0);
   c1_2->SetFillStyle(4000);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetTickx(1);
   c1_2->SetTicky(1);
   c1_2->SetLeftMargin(0.12);
   c1_2->SetRightMargin(0.04);
   c1_2->SetTopMargin(0.12);
   c1_2->SetBottomMargin(0.013);
   c1_2->SetFrameFillStyle(0);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameFillStyle(0);
   c1_2->SetFrameBorderMode(0);
   
   TH1D *looseSel_Jet_1_tau_2hdata158 = new TH1D("looseSel_Jet_1_tau_2hdata158","",20,0,1);
   looseSel_Jet_1_tau_2hdata158->SetBinContent(1,418976);
   looseSel_Jet_1_tau_2hdata158->SetBinContent(2,1242030);
   looseSel_Jet_1_tau_2hdata158->SetBinContent(3,599025);
   looseSel_Jet_1_tau_2hdata158->SetBinContent(4,186123);
   looseSel_Jet_1_tau_2hdata158->SetBinContent(5,45500);
   looseSel_Jet_1_tau_2hdata158->SetBinContent(6,8481);
   looseSel_Jet_1_tau_2hdata158->SetBinContent(7,1003);
   looseSel_Jet_1_tau_2hdata158->SetBinContent(8,79);
   looseSel_Jet_1_tau_2hdata158->SetBinContent(9,2);
   looseSel_Jet_1_tau_2hdata158->SetBinError(1,647.2836);
   looseSel_Jet_1_tau_2hdata158->SetBinError(2,1114.464);
   looseSel_Jet_1_tau_2hdata158->SetBinError(3,773.9671);
   looseSel_Jet_1_tau_2hdata158->SetBinError(4,431.4197);
   looseSel_Jet_1_tau_2hdata158->SetBinError(5,213.3073);
   looseSel_Jet_1_tau_2hdata158->SetBinError(6,92.09234);
   looseSel_Jet_1_tau_2hdata158->SetBinError(7,31.67018);
   looseSel_Jet_1_tau_2hdata158->SetBinError(8,8.888194);
   looseSel_Jet_1_tau_2hdata158->SetBinError(9,1.414214);
   looseSel_Jet_1_tau_2hdata158->SetMinimum(0);
   looseSel_Jet_1_tau_2hdata158->SetMaximum(2416823);
   looseSel_Jet_1_tau_2hdata158->SetEntries(2501219);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_1_tau_2hdata158->SetFillColor(ci);
   looseSel_Jet_1_tau_2hdata158->SetLineWidth(2);
   looseSel_Jet_1_tau_2hdata158->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hdata158->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hdata158->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata158->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_1_tau_2hdata158->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_1_tau_2hdata158->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata158->GetYaxis()->SetTitle("Events");
   looseSel_Jet_1_tau_2hdata158->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata158->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hdata158->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata158->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata158->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hdata158->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hdata158->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata158->Draw("EP");
   
   THStack *stack = new THStack();
   stack->SetName("stack");
   stack->SetTitle("ctack");
   
   TH1F *stack_stack_10 = new TH1F("stack_stack_10","ctack",20,0,1);
   stack_stack_10->SetMinimum(0);
   stack_stack_10->SetMaximum(1314883);
   stack_stack_10->SetDirectory(0);
   stack_stack_10->SetStats(0);
   stack_stack_10->SetLineStyle(0);
   stack_stack_10->SetMarkerStyle(20);
   stack_stack_10->GetXaxis()->SetLabelFont(42);
   stack_stack_10->GetXaxis()->SetLabelOffset(0.007);
   stack_stack_10->GetXaxis()->SetTitleOffset(1.1);
   stack_stack_10->GetXaxis()->SetTitleFont(42);
   stack_stack_10->GetYaxis()->SetLabelFont(42);
   stack_stack_10->GetYaxis()->SetLabelOffset(0.007);
   stack_stack_10->GetYaxis()->SetTitleOffset(1.25);
   stack_stack_10->GetYaxis()->SetTitleFont(42);
   stack_stack_10->GetZaxis()->SetLabelFont(42);
   stack_stack_10->GetZaxis()->SetLabelOffset(0.007);
   stack_stack_10->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(stack_stack_10);
   
   
   TH1D *resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159 = new TH1D("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159","",20,0,1);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinContent(1,4713.4);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinContent(2,13250.61);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinContent(3,12686.72);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinContent(4,7127.972);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinContent(5,1984.712);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinContent(6,313.5102);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinContent(7,40.3257);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinContent(8,2.170489);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinContent(9,0.5250608);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinError(1,26.64942);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinError(2,44.69247);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinError(3,43.62997);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinError(4,32.48599);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinError(5,17.01766);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinError(6,6.736742);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinError(7,2.362395);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinError(8,0.5556302);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetBinError(9,0.2652707);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetEntries(377256);

   ci = TColor::GetColor("#cc3333");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetFillColor(ci);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetLineWidth(2);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc159->GetZaxis()->SetTitleFont(42);
   stack->Add(resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160 = new TH1D("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160","",20,0,1);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinContent(1,7329.21);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinContent(2,10390.92);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinContent(3,4110.877);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinContent(4,1283.429);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinContent(5,296.4553);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinContent(6,53.34379);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinContent(7,4.993887);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinContent(8,0.9079794);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinError(1,29.0247);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinError(2,34.54981);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinError(3,21.7212);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinError(4,12.13359);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinError(5,5.815102);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinError(6,2.466719);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinError(7,0.7547395);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetBinError(8,0.321822);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetEntries(208226);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetFillColor(47);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetLineWidth(2);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc160->GetZaxis()->SetTitleFont(42);
   stack->Add(resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161 = new TH1D("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161","",20,0,1);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinContent(1,14634.94);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinContent(2,20216.18);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinContent(3,8267.555);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinContent(4,2595.104);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinContent(5,579.3566);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinContent(6,74.95818);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinContent(7,9.969808);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinContent(8,0.7385043);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinContent(9,0.3692521);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinError(1,52.27083);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinError(2,61.41178);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinError(3,39.25432);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinError(4,21.96548);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinError(5,10.39462);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinError(6,3.747742);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinError(7,1.360112);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinError(8,0.3701755);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetBinError(9,0.2617536);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetEntries(252534);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetFillColor(21);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc161->GetZaxis()->SetTitleFont(42);
   stack->Add(resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc,"");
   
   TH1D *looseSel_Jet_1_tau_2hqcd162 = new TH1D("looseSel_Jet_1_tau_2hqcd162","",20,0,1);
   looseSel_Jet_1_tau_2hqcd162->SetBinContent(1,432040.4);
   looseSel_Jet_1_tau_2hqcd162->SetBinContent(2,1208412);
   looseSel_Jet_1_tau_2hqcd162->SetBinContent(3,541344.6);
   looseSel_Jet_1_tau_2hqcd162->SetBinContent(4,162927.1);
   looseSel_Jet_1_tau_2hqcd162->SetBinContent(5,38160);
   looseSel_Jet_1_tau_2hqcd162->SetBinContent(6,7146.978);
   looseSel_Jet_1_tau_2hqcd162->SetBinContent(7,1146.219);
   looseSel_Jet_1_tau_2hqcd162->SetBinContent(8,72.85433);
   looseSel_Jet_1_tau_2hqcd162->SetBinError(1,3626.365);
   looseSel_Jet_1_tau_2hqcd162->SetBinError(2,3158.73);
   looseSel_Jet_1_tau_2hqcd162->SetBinError(3,1770.854);
   looseSel_Jet_1_tau_2hqcd162->SetBinError(4,1135.465);
   looseSel_Jet_1_tau_2hqcd162->SetBinError(5,625.6808);
   looseSel_Jet_1_tau_2hqcd162->SetBinError(6,328.0939);
   looseSel_Jet_1_tau_2hqcd162->SetBinError(7,254.9418);
   looseSel_Jet_1_tau_2hqcd162->SetBinError(8,27.16665);
   looseSel_Jet_1_tau_2hqcd162->SetEntries(9443600);
   looseSel_Jet_1_tau_2hqcd162->SetFillColor(36);
   looseSel_Jet_1_tau_2hqcd162->SetLineWidth(2);
   looseSel_Jet_1_tau_2hqcd162->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hqcd162->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hqcd162->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hqcd162->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hqcd162->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hqcd162->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hqcd162->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_2hqcd162->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hqcd162->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hqcd162->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hqcd162->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hqcd162->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hqcd162->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hqcd162->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hqcd162->GetZaxis()->SetTitleFont(42);
   stack->Add(looseSel_Jet_1_tau_2hqcd,"");
   stack->Draw("histsame");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetBinContent(1,450107.1);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetBinContent(2,68469.88);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetBinContent(3,5836.03);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetBinContent(4,703.855);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetBinContent(5,110.2885);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetBinContent(6,28.81187);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetBinError(1,1301.37);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetBinError(2,506.8214);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetBinError(3,147.9358);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetBinError(4,51.86119);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetBinError(5,20.14972);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetBinError(6,10.35483);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetEntries(165768);

   ci = TColor::GetColor("#ff6600");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetLineStyle(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig163->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164 = new TH1D("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164","",20,0,1);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetBinContent(1,459797.2);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetBinContent(2,63024.42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetBinContent(3,2371.231);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetBinContent(4,33.83779);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetBinContent(5,29.31084);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetBinError(1,3010.416);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetBinError(2,1124.25);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetBinError(3,225.4527);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetBinError(4,15.16622);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetBinError(5,20.79415);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetEntries(34132);

   ci = TColor::GetColor("#990099");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetLineColor(ci);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig164->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetBinContent(1,439300.7);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetBinContent(2,78643.67);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetBinContent(3,6468.526);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetBinContent(4,632.3881);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetBinContent(5,134.6028);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetBinContent(6,76.152);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetBinError(1,2969.9);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetBinError(2,1259.549);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetBinError(3,361.0666);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetBinError(4,112.086);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetBinError(5,49.32899);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetBinError(6,38.51574);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetEntries(31816);

   ci = TColor::GetColor("#009900");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetLineStyle(4);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig165->Draw("HISTCSAME");
   
   TH1D *looseSel_Jet_1_tau_2hherwig166 = new TH1D("looseSel_Jet_1_tau_2hherwig166","",20,0,1);
   looseSel_Jet_1_tau_2hherwig166->SetBinContent(1,488435.8);
   looseSel_Jet_1_tau_2hherwig166->SetBinContent(2,1175120);
   looseSel_Jet_1_tau_2hherwig166->SetBinContent(3,587104.4);
   looseSel_Jet_1_tau_2hherwig166->SetBinContent(4,191769.3);
   looseSel_Jet_1_tau_2hherwig166->SetBinContent(5,49321.23);
   looseSel_Jet_1_tau_2hherwig166->SetBinContent(6,8329.236);
   looseSel_Jet_1_tau_2hherwig166->SetBinContent(7,1095.692);
   looseSel_Jet_1_tau_2hherwig166->SetBinContent(8,42.61475);
   looseSel_Jet_1_tau_2hherwig166->SetBinContent(9,0.8943129);
   looseSel_Jet_1_tau_2hherwig166->SetBinError(1,3604.581);
   looseSel_Jet_1_tau_2hherwig166->SetBinError(2,5645.957);
   looseSel_Jet_1_tau_2hherwig166->SetBinError(3,4054.825);
   looseSel_Jet_1_tau_2hherwig166->SetBinError(4,2640.687);
   looseSel_Jet_1_tau_2hherwig166->SetBinError(5,1510.49);
   looseSel_Jet_1_tau_2hherwig166->SetBinError(6,510.2459);
   looseSel_Jet_1_tau_2hherwig166->SetBinError(7,256.7617);
   looseSel_Jet_1_tau_2hherwig166->SetBinError(8,27.96775);
   looseSel_Jet_1_tau_2hherwig166->SetBinError(9,0.3726708);
   looseSel_Jet_1_tau_2hherwig166->SetEntries(1256427);

   ci = 960;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_1_tau_2hherwig166->SetFillColor(ci);
   looseSel_Jet_1_tau_2hherwig166->SetLineStyle(9);
   looseSel_Jet_1_tau_2hherwig166->SetLineWidth(2);
   looseSel_Jet_1_tau_2hherwig166->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hherwig166->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hherwig166->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hherwig166->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hherwig166->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hherwig166->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hherwig166->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_2hherwig166->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hherwig166->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hherwig166->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hherwig166->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hherwig166->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hherwig166->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hherwig166->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hherwig166->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hherwig166->Draw("HIST same");
   
   TH1D *looseSel_Jet_1_tau_2hmg167 = new TH1D("looseSel_Jet_1_tau_2hmg167","",20,0,1);
   looseSel_Jet_1_tau_2hmg167->SetBinContent(1,421531.8);
   looseSel_Jet_1_tau_2hmg167->SetBinContent(2,1225341);
   looseSel_Jet_1_tau_2hmg167->SetBinContent(3,602711.2);
   looseSel_Jet_1_tau_2hmg167->SetBinContent(4,195390.4);
   looseSel_Jet_1_tau_2hmg167->SetBinContent(5,46910.49);
   looseSel_Jet_1_tau_2hmg167->SetBinContent(6,8291.53);
   looseSel_Jet_1_tau_2hmg167->SetBinContent(7,961.7204);
   looseSel_Jet_1_tau_2hmg167->SetBinContent(8,77.586);
   looseSel_Jet_1_tau_2hmg167->SetBinContent(9,3.220688);
   looseSel_Jet_1_tau_2hmg167->SetBinError(1,19119.39);
   looseSel_Jet_1_tau_2hmg167->SetBinError(2,27641.48);
   looseSel_Jet_1_tau_2hmg167->SetBinError(3,1133.049);
   looseSel_Jet_1_tau_2hmg167->SetBinError(4,659.7804);
   looseSel_Jet_1_tau_2hmg167->SetBinError(5,332.8414);
   looseSel_Jet_1_tau_2hmg167->SetBinError(6,145.1713);
   looseSel_Jet_1_tau_2hmg167->SetBinError(7,48.92345);
   looseSel_Jet_1_tau_2hmg167->SetBinError(8,14.76315);
   looseSel_Jet_1_tau_2hmg167->SetBinError(9,2.10986);
   looseSel_Jet_1_tau_2hmg167->SetEntries(3695211);

   ci = 961;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_1_tau_2hmg167->SetFillColor(ci);
   looseSel_Jet_1_tau_2hmg167->SetLineStyle(2);
   looseSel_Jet_1_tau_2hmg167->SetLineWidth(2);
   looseSel_Jet_1_tau_2hmg167->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hmg167->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hmg167->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hmg167->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hmg167->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hmg167->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hmg167->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_2hmg167->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hmg167->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hmg167->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hmg167->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hmg167->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hmg167->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hmg167->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hmg167->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hmg167->Draw("HIST same");
   
   TH1D *looseSel_Jet_1_tau_2hqcd168 = new TH1D("looseSel_Jet_1_tau_2hqcd168","",20,0,1);
   looseSel_Jet_1_tau_2hqcd168->SetBinContent(1,458718);
   looseSel_Jet_1_tau_2hqcd168->SetBinContent(2,1252269);
   looseSel_Jet_1_tau_2hqcd168->SetBinContent(3,566409.7);
   looseSel_Jet_1_tau_2hqcd168->SetBinContent(4,173933.6);
   looseSel_Jet_1_tau_2hqcd168->SetBinContent(5,41020.52);
   looseSel_Jet_1_tau_2hqcd168->SetBinContent(6,7588.791);
   looseSel_Jet_1_tau_2hqcd168->SetBinContent(7,1201.509);
   looseSel_Jet_1_tau_2hqcd168->SetBinContent(8,76.6713);
   looseSel_Jet_1_tau_2hqcd168->SetBinContent(9,0.8943129);
   looseSel_Jet_1_tau_2hqcd168->SetBinError(1,3626.956);
   looseSel_Jet_1_tau_2hqcd168->SetBinError(2,3159.832);
   looseSel_Jet_1_tau_2hqcd168->SetBinError(3,1771.96);
   looseSel_Jet_1_tau_2hqcd168->SetBinError(4,1136.207);
   looseSel_Jet_1_tau_2hqcd168->SetBinError(5,626.0255);
   looseSel_Jet_1_tau_2hqcd168->SetBinError(6,328.1937);
   looseSel_Jet_1_tau_2hqcd168->SetBinError(7,254.9575);
   looseSel_Jet_1_tau_2hqcd168->SetBinError(8,27.17676);
   looseSel_Jet_1_tau_2hqcd168->SetBinError(9,0.3726708);
   looseSel_Jet_1_tau_2hqcd168->SetEntries(1.028162e+07);
   looseSel_Jet_1_tau_2hqcd168->SetDirectory(0);
   looseSel_Jet_1_tau_2hqcd168->SetFillColor(1);
   looseSel_Jet_1_tau_2hqcd168->SetFillStyle(3013);
   looseSel_Jet_1_tau_2hqcd168->SetLineWidth(2);
   looseSel_Jet_1_tau_2hqcd168->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hqcd168->SetMarkerSize(0);
   looseSel_Jet_1_tau_2hqcd168->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hqcd168->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hqcd168->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hqcd168->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hqcd168->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hqcd168->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_2hqcd168->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hqcd168->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hqcd168->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hqcd168->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hqcd168->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hqcd168->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hqcd168->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hqcd168->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hqcd168->Draw("E2same");
   
   TH1D *looseSel_Jet_1_tau_2hdata169 = new TH1D("looseSel_Jet_1_tau_2hdata169","",20,0,1);
   looseSel_Jet_1_tau_2hdata169->SetBinContent(1,418976);
   looseSel_Jet_1_tau_2hdata169->SetBinContent(2,1242030);
   looseSel_Jet_1_tau_2hdata169->SetBinContent(3,599025);
   looseSel_Jet_1_tau_2hdata169->SetBinContent(4,186123);
   looseSel_Jet_1_tau_2hdata169->SetBinContent(5,45500);
   looseSel_Jet_1_tau_2hdata169->SetBinContent(6,8481);
   looseSel_Jet_1_tau_2hdata169->SetBinContent(7,1003);
   looseSel_Jet_1_tau_2hdata169->SetBinContent(8,79);
   looseSel_Jet_1_tau_2hdata169->SetBinContent(9,2);
   looseSel_Jet_1_tau_2hdata169->SetBinError(1,647.2836);
   looseSel_Jet_1_tau_2hdata169->SetBinError(2,1114.464);
   looseSel_Jet_1_tau_2hdata169->SetBinError(3,773.9671);
   looseSel_Jet_1_tau_2hdata169->SetBinError(4,431.4197);
   looseSel_Jet_1_tau_2hdata169->SetBinError(5,213.3073);
   looseSel_Jet_1_tau_2hdata169->SetBinError(6,92.09234);
   looseSel_Jet_1_tau_2hdata169->SetBinError(7,31.67018);
   looseSel_Jet_1_tau_2hdata169->SetBinError(8,8.888194);
   looseSel_Jet_1_tau_2hdata169->SetBinError(9,1.414214);
   looseSel_Jet_1_tau_2hdata169->SetMinimum(0);
   looseSel_Jet_1_tau_2hdata169->SetMaximum(2416823);
   looseSel_Jet_1_tau_2hdata169->SetEntries(2501219);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_1_tau_2hdata169->SetFillColor(ci);
   looseSel_Jet_1_tau_2hdata169->SetLineWidth(2);
   looseSel_Jet_1_tau_2hdata169->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hdata169->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hdata169->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata169->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_1_tau_2hdata169->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_1_tau_2hdata169->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata169->GetYaxis()->SetTitle("Events");
   looseSel_Jet_1_tau_2hdata169->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata169->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hdata169->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata169->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata169->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hdata169->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hdata169->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata169->Draw("EPSAME");
   
   TLegend *leg = new TLegend(0.6084422,0.4798951,0.9174874,0.8295455,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("looseSel_Jet_1_tau_2hdata","Data","LEP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_1_tau_2hqcd","QCD Pythia8","F");
   entry->SetFillColor(36);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_1_tau_2hherwig","         Herwig++","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_1_tau_2hmg","         MadGraph+Pythia8","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc","W+jets","F");
   entry->SetFillColor(21);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_2_hmc","Z+jets","F");
   entry->SetFillColor(47);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_2_hmc","t#bar{t}","F");

   ci = TColor::GetColor("#cc3333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig","G#rightarrowWW","L");

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig","W'#rightarrowWZ","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_2_hsig","G#rightarrowZZ","L");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.904,"77.3 fb^{-1} (2016+2017)(13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.849655,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.072);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.763255,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.05472);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1D *looseSel_Jet_1_tau_2hdata_copy170 = new TH1D("looseSel_Jet_1_tau_2hdata_copy170","",20,0,1);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinContent(1,418976);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinContent(2,1242030);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinContent(3,599025);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinContent(4,186123);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinContent(5,45500);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinContent(6,8481);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinContent(7,1003);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinContent(8,79);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinContent(9,2);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinError(1,647.2836);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinError(2,1114.464);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinError(3,773.9671);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinError(4,431.4197);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinError(5,213.3073);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinError(6,92.09234);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinError(7,31.67018);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinError(8,8.888194);
   looseSel_Jet_1_tau_2hdata_copy170->SetBinError(9,1.414214);
   looseSel_Jet_1_tau_2hdata_copy170->SetMinimum(0);
   looseSel_Jet_1_tau_2hdata_copy170->SetMaximum(2416823);
   looseSel_Jet_1_tau_2hdata_copy170->SetEntries(2501219);
   looseSel_Jet_1_tau_2hdata_copy170->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_1_tau_2hdata_copy170->SetFillColor(ci);
   looseSel_Jet_1_tau_2hdata_copy170->SetLineWidth(2);
   looseSel_Jet_1_tau_2hdata_copy170->SetMarkerStyle(20);
   looseSel_Jet_1_tau_2hdata_copy170->GetXaxis()->SetTitle("Jet 1 #tau_{2} ");
   looseSel_Jet_1_tau_2hdata_copy170->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata_copy170->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_1_tau_2hdata_copy170->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_1_tau_2hdata_copy170->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata_copy170->GetYaxis()->SetTitle("Events");
   looseSel_Jet_1_tau_2hdata_copy170->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata_copy170->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hdata_copy170->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata_copy170->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_2hdata_copy170->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_2hdata_copy170->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_2hdata_copy170->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_2hdata_copy170->Draw("sameaxis");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
